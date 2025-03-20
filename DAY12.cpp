q1,Binary Search
https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
TC:O(logn)
SC:O(1)
approach: we haave taken two pointers which will point at start and end and then we calculate mid pointer which will be the half of sum of high and low pointer if element at mid position matches our 
target then we return the mid index if element at mid ig greater we will move high pointer just back to the mid and if ele at mid is lesser then we will move the low pointer just in front of mid.
in this way we are shrinking the search windoe everytime.


Q2. Find First and Last Position of Element in Sorted Array
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:

    int lowerBound(vector<int> &arr,int target){
        int ans=-1;
        int high=arr.size()-1;
        int low=0;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &arr,int target){
        int ans=-1;
        int high=arr.size()-1;
        int low=0;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]<=target){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(lowerBound(nums,target)==-1 || nums[lowerBound(nums,target)]!=target) return {-1,-1};
        return {lowerBound(nums,target),upperBound(nums,target)};

    }
};

TC:O(2*logn)
SC:O(1)
approach: we havefirst made two functions which will calculate the lower and upper bound and then we have returned them after checking a condition if the target is present or not.

Q3.Search Insert Position
https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
                int high=nums.size()-1;
        int low=0;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};

TC:O(logn)
SC:O(1)
apprpach: we have did the binary search same as q1.
