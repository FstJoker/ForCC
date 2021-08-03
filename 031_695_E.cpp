class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<int> direction{ -1, 0, 1, 0, -1 };
        int m = grid.size(), n = m ? grid[0].size() : 0, local_area, area = 0, x, y;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    local_area = 1;
                    grid[i][j] = 0;
                    stack<pair<int, int>> island;
                    island.push({ i, j });
                    while (!island.empty()) {
                        auto [r, c] = island.top();
                        island.pop();
                        for (int k = 0; k < 4; ++k) {
                            x = r + direction[k], y = c + direction[k + 1];
                            if (x >= 0 && x < m &&
                                y >= 0 && y < n && grid[x][y] == 1) {
                                grid[x][y] = 0;
                                ++local_area;
                                island.push({ x, y });
                            }
                        }
                    }
                    area = max(area, local_area);
                }
            }
        }
        return area;
    }
};