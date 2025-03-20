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

Q2. Longest Common Prefix
https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    sort(strs.begin(), strs.end()); 
    string first = strs[0], last = strs[strs.size() - 1];
    int minLength = min(first.size(), last.size());
    int i = 0;
    while (i < minLength && first[i] == last[i]) {
        i++;
    }
    return first.substr(0, i);
    }
};
TC:O(mlogm+n) where n is the length of the smallest string and m is the length of vector string
SC:0(1)
approach:first we have sorted teh array to that the most different strings will be at two ends . since these are the most dissimilar ones we will compare onyl these two .
then we have run a loop till the elements in the miinimum of tw2o strings and increased i till those two matches . andat lawst just printed that part.
