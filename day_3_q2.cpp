//Number of Equivalent Domino Pairs
https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=problem-list-v2&envId=2030iluv

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
          int n=dominoes.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((dominoes[i][0]==dominoes[j][0] && dominoes[i][1]==dominoes[j][1])||(dominoes[i][0]==dominoes[j][1] && dominoes[i][1]==dominoes[j][0])){
                count++;
            }
        }
    }
    return count;  
    }
};

TC:~O(n^2)
SC:O(1)
approach: we have used brute force method to check the given conditions , we are comparing 1 pair with all the other pairs one by one and storing the ans in count variable if the conditons satisfy.
