class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // In this question we need to choose such a point so that
        // we get one value in the increasing and another in the decreasing fashion
        // so starting with the bottom left or top right corner
        int n = matrix.size();
        int m = matrix[0].size();
        int i = n-1;
        int j = 0;
        while(i>=0 && j<m) {
            if(matrix[i][j]==target) return 1;
            else if(matrix[i][j]> target) i--;
            else j++;
        }
        return 0;

    }
};