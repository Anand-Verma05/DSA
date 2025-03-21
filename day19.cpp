Maximum Nesting Depth of the Parentheses
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                ans=max(ans,count);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return ans;
    }
};
TC:O(n)
SC:O(1)
approach:simmply keeping a check of "(" if is found increase count by onw and if ")" found that means the bracket is closed so we decrease by 1 and storgin the max of count and ans.

Q2.Roman to Integer
https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int ans=m[s[n-1]];

        for(int i=n-2;i>=0;i--){
            if(m[s[i]]<m[s[i+1]]) ans-=m[s[i]];
            else{
                ans+=m[s[i]];
            }
        }
        return ans;
    }
};
TC:O(n)
SC:O(1)
approach: first made a map in which all the correseponding values are stored , now intialized an integer with the value of lasst integer and the itersated through the string from second last element till first
if the element's value is smaller than its succedding value we subtract that value and if it larager then we add.
