
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        // if (target < matrix[0][0] ||
        //     target > matrix[rows - 1][cols - 1]) {
        //     return false;
        // }

        // First binary search: find the correct row
        int leftRow = 0;
        int rightRow = rows - 1;

        while (leftRow < rightRow) {
            int midRow = leftRow + (rightRow - leftRow) / 2;

            if (matrix[midRow][cols - 1] < target) {
                leftRow = midRow + 1;
            } else {
                rightRow = midRow;
            }
        }

        // Second binary search: search within that row
        int row = leftRow;
        int left = 0;
        int right = cols - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};
