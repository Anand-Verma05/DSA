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
