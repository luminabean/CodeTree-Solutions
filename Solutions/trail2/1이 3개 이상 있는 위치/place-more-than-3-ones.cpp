#include <iostream>

using namespace std;

int n;
int grid[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1}; // 동서남북
    int ans = 0;

    for (int c = 0; c < n; c++) {
        for (int r = 0; r < n; r++) {
            int cnt = 0; // 인접한 1의 개수

            for (int i = 0; i < 4; i++) {
                // 경계선 체크
                if ((c+dx[i] >= 0 && c+dx[i] < n) && (r+dy[i] >= 0 && r+dy[i] < n)) {
                    if (grid[r+dy[i]][c+dx[i]] == 1)
                        cnt++;
                }
            }

            if (cnt >= 3)
                ans++;
        }
    }
    cout << ans;
    return 0;
}