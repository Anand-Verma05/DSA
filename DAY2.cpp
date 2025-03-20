Q1.good string bad string
https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1
//to find if the given string is bad or not 
//a string is bad if it contains more than 5 vowels or 3consonant consecutively
//string has '?' which can be any character

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
    vector<char> vowel={'a','e','i','o','u'};
    int ccount=0;
    int vcount=0;
    int len=S.size();
    
    for(int i=0;i<len;i++){
        if(S[i]=='?'){
            vcount++;
            ccount++;
        }
        else if(find(vowel.begin(),vowel.end(),S[i])!=vowel.end()){
            vcount++;
            ccount=0;
        }
        else if(find(vowel.begin(),vowel.end(),S[i])==vowel.end()){
            vcount=0;
            ccount++;
        }
        if(vcount>5||ccount>3){
            return 0;
        }

    }
    return 1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends

//approach: to check each character of the string and storing the count of vowels and consonants separatley.
//if any of the conditons for bad string meets ,return 1;
// or else return 0;


q2. Merge Two 2D Arrays by Summing Values
 https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/

 
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int first = 0;
        int sec = 0;
        vector<vector<int>> ans;
        for (int i = 0; first < len1 && sec < len2; i++) {
            if (nums1[first][0] == nums2[sec][0]) {
                int temp = nums1[first][1] + nums2[sec][1];
                ans.push_back({nums1[first][0], temp});
                first++;
                sec++;
            }

            else if (nums1[first][0] > nums2[sec][0]) {
                int temp = nums2[sec][1];
                ans.push_back({nums2[sec][0], temp});
                sec++;
            }

            else if (nums1[first][0] < nums2[sec][0]) {
                int temp = nums1[first][1];
                ans.push_back({nums1[first][0], temp});
                first++;
            }
        }

        while (first < len1) {
            ans.push_back({nums1[first][0], nums1[first][1]});
            first++;
        }
        while (sec < len2) {
            ans.push_back({nums2[sec][0], nums2[sec][1]});
            sec++;
        }
        return ans;
    }
};


approach:we took two pointers whcih will iterate through the two given array
first we compared the id value and according to that we have increased the value of pointers and  did the further operations(can be seen in the code) and stored the result in the ans vector
which we have returned at last
TC:~O(N+M)
SC:O(N+M)
