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
TC:O(logn)
SC:O(1)
approach:we have used binary seaerch only , just inside the conditions we have applied the condition to store floor and ceil whenever the mid element
is less we stored that element in the floor and whenever  its high we stored it in ceil and if mid element matches target we return that element

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
approach: first did the basic skeleton of BS , first we check if the element at low is less than the mid that means the left half is sorted and since it is sorted 
the minimum element will the element at left index so we store the left element in a variable 'ans' and then we will move to the other half by eliminating the current 
half . if the elemnt at low is greater than the element at mid that means the right half is sorted and so we store the minimum of  element at mid and previously stored
elemet in ans . then we eliminate the right half by making high =mid-1;
TC:O(logn)
SC:O(1)


Q3.Search in Rotated Sorted Array
https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==target) return mid;
            if(arr[low]<=arr[mid]){
                if(arr[low]<=target && target<=arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<=target && target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
TC:O(logn)
SC:O(1)
approach:since the array is rotated therefore one of the halves will be sorted, if the element at mid position is greater than the element at low index then the 
left half is sorted and then we have checked if the target is present in that sorted half or not if it is present then we eliminate the right half by making high = mid-1 
and if it is not present then we will eliminate this half by making low = mid+1 , and similarly we have done if the right half id sorted .

