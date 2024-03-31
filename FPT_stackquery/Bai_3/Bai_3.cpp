#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int minDays(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    vector<pair<int, int>> directions = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    int freshCount = 0;
    int days = 0;

    queue<pair<int, int>> rottenApples;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                ++freshCount;
            }
            else if (grid[i][j] == 2) {
                rottenApples.push({ i, j });
            }
        }
    }

    while (!rottenApples.empty()) {
        int size = rottenApples.size();
        bool hasRotten = false;

        for (int i = 0; i < size; ++i) {
            int x = rottenApples.front().first;
            int y = rottenApples.front().second;
            rottenApples.pop();

            for (const auto& dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;

                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2;
                    rottenApples.push({ nx, ny });
                    --freshCount;
                    hasRotten = true;
                }
            }
        }

        if (hasRotten) {
            ++days;
        }
    }

    return (freshCount == 0) ? days : -1;
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }


        cout << minDays(grid) << endl;

    }


    return 0;
}