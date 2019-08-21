#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row_max(grid.size(), 0);
        vector<int> col_max(grid[0].size(), 0);
        int res = 0;
        for (int row = 0; row < grid.size(); ++row){
            for (int col = 0; col < grid[0].size(); ++col){
                if (grid[row][col]>row_max[row]){
                    row_max[row]=grid[row][col];
                }
                if (grid[row][col]>col_max[col]){
                    col_max[col] = grid[row][col];
                }
            }
        }
        for (int row = 0; row < grid.size(); ++row){
            for (int col = 0; col < grid[0].size(); ++col){
                res += min(row_max[row], col_max[col]) - grid[row][col];
            }
        }

        return res;
    }
};

int main(){
    vector<vector<int>> grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
    Solution sol;
    int res = sol.maxIncreaseKeepingSkyline(grid);
    return 0;
}