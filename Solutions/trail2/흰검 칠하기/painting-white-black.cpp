#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int tiles[200000][2] = {{0, 0}, };  // {White가 칠해진 횟수, Black이 칠해진 횟수}
    int color[200000] = {0, };  // -1 = White, 0 = None, 1 = Black, 2 = Grey
    int cur = 100000;  // 현재 화표

    for (int i = 0; i < n; i++) {
        // 순서 상관없이 흰색과 검은색으로 각각 두 번 이상 칠해지면 회색으로 바뀜
        // 규칙 특성상 검은색과 흰색은 번갈아가면서 나옴. 따라서 4번 이상 방문하면 회색으로 바뀐다고 보면 됨
        if (dir[i] == 'R') {
            for (int j = 0; j < x[i]; j++) {
                tiles[cur][1]++;
                color[cur] = (tiles[cur][0] >= 2 & tiles[cur][1] >= 2) ? 2 : 1;

                if (j < x[i] - 1)
                    cur++;
            }
        }
        else if (dir[i] == 'L') {
            for (int j = 0; j < x[i]; j++) {
                tiles[cur][0]++;
                color[cur] = (tiles[cur][0] >= 2 & tiles[cur][1] >= 2) ? 2 : -1;

                if (j < x[i] - 1)
                    cur--;
            }
        }
    }

    int black = 0, white = 0, grey = 0;
    for (int i = 0; i < 200000; i++) {
        if (color[i] == -1)
            white++;
        else if (color[i] == 1)
            black++;
        else if (color[i] == 2)
            grey++;
    }

    cout << white << " " << black << " " << grey;

    return 0;
}