#include <iostream>

using namespace std;

string dirs;

int main() {
    cin >> dirs;

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};  // 북동남서
    int cur_pos = 0;
    int pos[2] = {0, 0};

    for (int i = 0; i < dirs.length(); i++) {
        if (dirs[i] == 'R')
            cur_pos = cur_pos == 3 ? 0 : cur_pos+1;
        else if (dirs[i] == 'L')
            cur_pos = cur_pos == 0 ? 3 : cur_pos-1;
        else {
            pos[0] += dx[cur_pos % 4];
            pos[1] += dy[cur_pos % 4];
        }
    }
    cout << pos[0] << " " << pos[1];
    return 0;
}