class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int row[9]{}, col[9]{}, box[9]{};

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if(b[r][c] == '.') continue;

                int bit = 1 << (b[r][c] - '1');
                int k = (r/3) * 3 + (c/3);

                if((row[r] | col[c] | box[k]) & bit) return false;

                row[r] |= bit;
                col[c] |= bit;
                box[k] |= bit;
            }
        }

        return true;
    }
};
