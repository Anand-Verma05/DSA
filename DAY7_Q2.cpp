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