#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int whichDirection(char dir) {
    if(dir == 'E')
        return 0;
    if(dir == 'W')
        return 1;
    if(dir == 'S')
        return 2;
    if(dir == 'N')
        return 3;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int pos[2] = {0, 0};  // 현재 위치
    int dx[4] = {1, -1, 0, 0};  // 동서남북
    int dy[4] = {0, 0, -1, 1};  // 동서남북
    int time = 0;  // 경과 시간

    // 이동해서 0, 0에 도착하면 바로 답 출력
    for (int i = 0; i < N; i++) {
        for (int n = 0; n < dist[i]; n++) {
            pos[0] += dx[whichDirection(dir[i])];
            pos[1] += dy[whichDirection(dir[i])];
            time++;

            if(pos[0] == 0 && pos[1] == 0) {
                cout << time;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}