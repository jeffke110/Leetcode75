class Solution {
    public:
        int equalPairs(vector<vector<int>>& grid) {
            int n = grid.size();
            map<vector<int>, int> rowMap;
            int count = 0;
    
            // Store frequency of each row
            for (int i = 0; i < n; ++i) {
                rowMap[grid[i]]++;
            }
    
            // For each column, build the column vector and check in map
            for (int j = 0; j < n; ++j) {
                vector<int> col;
                for (int i = 0; i < n; ++i) {
                    col.push_back(grid[i][j]);
                }
                if (rowMap.count(col)) {
                    count += rowMap[col];
                }
            }
    
            return count;
        }
    };
    