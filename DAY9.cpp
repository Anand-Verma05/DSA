Q1.Two Sum
https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(m.count(rem)){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};
TC:O(n)
SC:O(n)
approach:we have used a map  to store the element and its index and then for each element we are trying to find the remaining elemnt in the map if it is found we just return both elements' indexes

Q2.Sort Colors
https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
                

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else mid++;
        }
    }
};

TC:O(n)
SC:O(1)
approach:used three pointers which are pointing at the first and last indexes and then we have used a mid named pointer which will traverse the array and it will swap the
elements accordingly and move the high , low pointers accordingly
if mid element is 0 that means we need to swap it with low element and then we move the pointers forward
if mid element is 2 that means it shoul be at the end so we'll swap it with high and since after swapping mid can be 1 or 0 so we only decrease the high pointer
if mid element is 1 that means it is in the right place so we just move mid one position ahead
