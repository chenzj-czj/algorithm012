class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int numRow = grid.size();
        if (numRow == 0) {
            return 0;
        }
        
        int result = 0;
        int numCol = grid[0].size();
        for (int i = 0; i < numCol; i++) {
            for (int j = 0; j < numRow; j++) {
                if (grid[j][i] == '1') {
                    result++;
                    dfs(grid, j, i);
                }
            }
        }

        return result;
    }

    void dfs(vector<vector<char>>& grid, int r, int c) {
        int numRow = grid.size();
        int numCol = grid[0].size();

        grid[r][c] = '0';
        if (r - 1 >= 0 && grid[r-1][c] == '1') dfs(grid, r - 1, c);
        if (r + 1 < numRow && grid[r+1][c] == '1') dfs(grid, r + 1, c);
        if (c - 1 >= 0 && grid[r][c-1] == '1') dfs(grid, r, c - 1);
        if (c + 1 < numCol && grid[r][c+1] == '1') dfs(grid, r, c + 1);
    }
};