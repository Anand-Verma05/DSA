Q1.Square Root
https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int ans=0;
        int low=1;
        int high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid*mid==n)return mid;
            else if(mid*mid<n) {
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
TC:O(logn)
SC:O(1)
approach: we have declared two pointers high and low which will point the number and 0 respectively and then we calculated mid and on mid we have checked if that is the square root less than or 
equal to the given number . if less then high =mid-1 else low=mid+1 , in this way we are reducing the search window size .

Q2.Koko Eating Bananas
https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    int max(vector<int> arr){
        int maxi=arr[0];
        for(auto i:arr){
            if(i>maxi) maxi=i;
        }
        return maxi;
    }

    long long calculateHours(vector<int> hours,int check){
        long long totalHours=0;
        for(int i=0;i<hours.size();i++){
            totalHours+=hours[i]%check?hours[i]/check+1:hours[i]/check;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int hours) {
        int high=max(piles);
        int low=1;
        while(low<=high){
            int mid=(high+low)/2;
            if(calculateHours(piles,mid)<=hours){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
TC:O(logn*n)
SC:O(1)
approach:

Q3.Find the Smallest Divisor Given a Threshold
https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:
    int divisionSum(vector<int> nums,int k){
    int sum=0;
    for(int j=0;j<nums.size();j++){
        sum+=ceil(double(nums[j])/double(k));
            }
    return sum;
    
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
                auto maxele=max_element(nums.begin(),nums.end());
        int high=*maxele;
        int low=1;
        int ans=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(divisionSum(nums,mid)<=threshold){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};
TC:O(logn*n)
SC:(1)
approach:

