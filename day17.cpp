Q1.Isomorphic Strings
https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
            if (s.size() != t.size()) return false;
    
    unordered_map<char, char> m;
    unordered_set<char> used;
    
    for (int i = 0; i < s.size(); i++) {
        char sc = s[i], tc = t[i];
        
        if (m.count(sc)) {
            if (m[sc] != tc) return false;
        } else {  
            if (used.count(tc)) return false;  
            m[sc] = tc;
            used.insert(tc);
        }
    }
    return true;
    }
};
TC:O(n)
SC:O(n)

approach: we have created one unordered map and one set . so we are iterating the strings and checking the character in s if it  is present in the map then we check if that character is mapped to a fixed one or not 
and if it is not present in the map then we see if corresepoinding to that character in other string is used or not and then we map chracter in s to char in t.
if it passes all the test cases then we return true

Q2.Remove Outermost Parentheses
https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
            string result = "";
    int count = 0; // Balance counter

    for (char c : s) {
        if (c == '(') {
            if (count > 0) result += c; 
            count++;
        } else { 
            count--;
            if (count > 0) result += c; 
        }
    }

    return result;
    }
};
TC:O(n)
SC:O(1)
approach: we have keeping the count of open paranthesis . if it is open then increase the count and add it to the final string if the count is >0 that means it is not the outer paranthesis and we decraesed the 
count if it is a closed paranthesis .
