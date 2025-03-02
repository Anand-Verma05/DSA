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
