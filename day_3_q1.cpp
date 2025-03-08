// Flipping an Image
https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n=image.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<(n+1)/2;j++){
            swap(image[i][j],image[i][n-j-1]);
            image[i][j]=1-image[i][j];
            if(j!=n-j-1) image[i][n-j-1]=1-image[i][n-j-1];

    }
}

    return image;
    }
};

TC:~O(n^2)
SC:O(1)
approach:first we have iterated through the vector and reversed each row and then after reversiing we have just made all the 1s to 0 and vice versa
