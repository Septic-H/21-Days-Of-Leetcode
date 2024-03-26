class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int m = matrix.size();
        int n = matrix[0].size();
        int rowBegin = 0, rowEnd = m - 1;
        int colBegin = 0, colEnd = n - 1;

        while (rowBegin <= rowEnd && colBegin <= colEnd) {
            for (int j = colBegin; j <= colEnd; j++) {
                result.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;

            for (int j = rowBegin; j <= rowEnd; j++) {
                result.push_back(matrix[j][colEnd]);
            }
            colEnd--;

            if (rowBegin <= rowEnd) {
                for (int j = colEnd; j >= colBegin; j--) {
                    result.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;

            if (colBegin <= colEnd) {
                for (int j = rowEnd; j >= rowBegin; j--) {
                    result.push_back(matrix[j][colBegin]);
                }
            }
            colBegin++;
        }

        return result;
    }
};