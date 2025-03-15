Q1.Ceil The Floor
https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM

pair<int,int> floorCeil(vector<int> &arr,int target){
    int floor=-1;
    int ceil=-1;
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==target) return {target,target};
        else if(arr[mid]<target){
            floor=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
            ceil=arr[mid];
        }
    }
    return {floor,ceil};
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	return floorCeil(a,x);
}


Q2.Find Minimum in Rotated Sorted Array
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& arr) {
        int ans=INT_MAX;
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                ans=min(arr[low],ans);
                low=mid+1;
            }
            else{
                ans=min(arr[mid],ans);
                high=mid-1;
            }
        }
        return ans;
    }
};


TC:O(logn)
SC:O(1)
approach:we have used binary seaerch only , just inside the conditions we have applied the condition to store floor and ceil whenever the mid element is less we stored that element in the floor and whenever 
its high we stored it in ceil and if mid element matches target we return that element.
