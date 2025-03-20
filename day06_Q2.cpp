  
Q2.Stock span problem
https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        
    vector<int> ans(arr.size());
    ans[0] = 1;  

    for (int i = 1; i < arr.size(); i++) {
        int count = 1;

      
        int j = i - 1;
        while (j >= 0 && arr[j] <= arr[i]) {
            count += ans[j];  
            j -= ans[j];      
        }

        ans[i] = count;
    }

    return ans;
    }
};

TC:O(n)
SC:O(1)

approach:we have started from 2nd element since for 1st span will be 1 then for the next ones we have stored the count of previous ones ans to optimize it we have skipped 
the elements which should not be checked 




