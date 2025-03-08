// Merge Two 2D Arrays by Summing Values
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
