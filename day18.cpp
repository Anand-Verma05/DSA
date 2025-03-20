Q1.Valid Anagram
https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        map<char,int> n;
        for(int i=0;i<s.size() || i<t.size();i++){
            if(i<s.size()) m[s[i]]++;
            if(i<t.size())n[t[i]]++;
        }
        if(m==n) return true;
        return false;
    }
};

TC:O(2N) n is the number of elements in largest string
SC:O(2n)
approach: used to map to store the count of characters and then compared it
