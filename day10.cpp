Q1.Rearrange Array Elements by Sign
https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pos=0;
        int neg=1;
        for(auto i:nums){
            if(i>=0){
                ans[pos]=i;
                pos+=2;
            }
            else{
                ans[neg]=i;
                neg+=2;
            }
        }
        return ans;
    }
};
TC:O(n)
SC:O(n)
approach: we have taken a vector of same size to store the result and then we intialized 2 variables pos and neg which will point 0 and 1st index intially . then we iterate through the vector
if the element is positive we store it at pos index in the ans vector and increment the pos by 2 and if the element is neg we will store it at neg index and increase the neg index by 2.

Q2.Next Permutation
https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
    int index=-1;
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    cout<<index<<endl;
    if(index==-1){
        reverse(arr.begin(),arr.end());
        return;
    }
    for(int j=arr.size()-1;j>index;j--){
        if(arr[j]>arr[index]){
            swap(arr[j],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    }
};
TC:O(3N) //in worst case
SC:O(1)

approach: first we find the break point that is the element which is less than its successive element . after finding the break point we find the smallest element which is greater than the element at break point
from the right part of the break point . then we swap those two and after that we just reverse the vector form the index+1 element . also if no break point is found then we just reverse the original vector.

Q3.Best Time to Buy and Sell Stock
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mini=INT_MAX;
         int maxprofit=0;
         for(int i=0;i<prices.size();i++){
            mini=min(prices[i],mini);
            maxprofit=max(maxprofit,prices[i]-mini);
         }
    return maxprofit;
    }
};

TC:O(n)
SC:O(1)
approach: we are storing two things one is the minimum element and the other is the max profit. so first we are iterating through the array and as we move forward we update the minimum element 
and simultaneously calculating the difference of the current element and the minimum element and updating it to the maxprofit variable.
  
