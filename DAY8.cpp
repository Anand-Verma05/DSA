Q1.Move Zeroes
https://leetcode.com/problems/move-zeroes/description/

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int j=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    j=i;
                    break;
                }
            }
            if(j==-1) return ;
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]!=0){
                    swap(nums[i],nums[j]);
                    j++;
                }
            }
        }
    };

TC:O(n)
SC:O(1)
approach: iterate the array first we have marked the first zero then we have swapped the nonn zero elements with the first zero and whenever we find the non-zero elements then only we have moved the j pointer(which was storing the first zero) so that it agains point to the fisrt zero

Q2.Rotate Array
https://leetcode.com/problems/rotate-array/description/

class Solution {
    public:
    void reverse(vector<int>& a, int start, int end) { 
        while(start <= end) {
            swap(a[start], a[end]);
            start++;
            end--;
        }
    }
        void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); 
        reverse(nums, 0, nums.size() - k - 1); 
        reverse(nums, nums.size() - k, nums.size() - 1); 
        reverse(nums, 0, nums.size() - 1);
        }
};
TC:O(n)
SC:O(1)
approach:we have rotated the vector in 3 parts , first we have reversed the vector from 0 to n-k-1 (n is the size) , then from n-k to n-1 and the reversed the whole vector
