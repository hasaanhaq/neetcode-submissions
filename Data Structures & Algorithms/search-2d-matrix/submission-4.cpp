class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        int firstRow = 0;
        int lastRow = rows-1;

        while(firstRow < lastRow){
            int midRow = firstRow + (lastRow - firstRow) / 2;

            if(matrix[midRow][cols - 1] < target){
                firstRow = midRow + 1;
            }else{
                lastRow = midRow;
            }
        }

        int row = firstRow;
        int left = 0;
        int right = cols - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(matrix[row][mid] < target){
                left = mid + 1;
            }else if(matrix[row][mid] > target){
                right = mid - 1;
            }else{
                return true;
            }
        }

        return false;
    }
};
