day_7 q1:Can Place Flowers
https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int i=0;
        while(i<flowerbed.size()){
            if(flowerbed[i]==0 && (i==0||flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0  )){
                flowerbed[i]=1;
                count++;
            }
                i++;
        } 
        return count>=n;
    }
};
TC:O(n)
SC:O(1)
approach : we have checked the condition for placing the flower that is the i-1 and i+1 element should be 0 and if it so we have increase teh count and made 
that element equals to 1 for future element comparison and i have added additional conditions if the elemtn is first one or lst one . 

day 7 q2:Minimum Positive Sum Subarray 
https://leetcode.com/problems/minimum-positive-sum-subarray/description/?envType=problem-list-v2&envId=prefix-sum

#include <bits/stdc++.h>
using namespace std;
int minsub(vector<int> &arr,int l,int r){
    int ans=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
          
            if((j-i+1) >=l && (j-i+1)<=r && sum>0){
                
                ans=min(ans,sum); 
            }
           
        }
    }

  
    if(ans==INT_MAX) return -1;
    return ans;
}
int main() {
    vector<int> arr={3, -2, 1, 4};
    cout<<minsub(arr,2,3);
return 0;
}

TC:0{n^2)
SC:O(1)
approach : calcultaed the sum of all subarray and if sum is greater than 0 and the lenght of subarray if inside the given range we have 
stored it and compared with the previous final minimun sum.
