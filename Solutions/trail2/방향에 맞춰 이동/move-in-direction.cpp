#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1}; // 동서남북
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int pos[2] = {0, 0};
    for (int i = 0; i < n; i++) {
        int dir_num = 0;

        if (dir[i] == 'W')
            dir_num = 1;
        else if (dir[i] == 'S')
            dir_num = 2;
        else if (dir[i] == 'N')
            dir_num = 3;

        pos[0] += dx[dir_num] * dist[i];
        pos[1] += dy[dir_num] * dist[i];
    }
    cout << pos[0] << " " << pos[1];
    return 0;
}