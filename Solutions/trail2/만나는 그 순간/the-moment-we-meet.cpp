#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    int time = 1;
    int a_idx = 0, b_idx = 0;  // 각 명령들의 인덱스
    int a_pos = 0, b_pos = 0;  // A와 B의 위치

    while (1) {
        // A먼저 움직임
        a_pos = d[a_idx] == 'R' ? a_pos+1 : a_pos-1;
        t[a_idx]--;
        a_idx = t[a_idx] == 0 ? a_idx+1 : a_idx;

        // B 움직임
        b_pos = d2[b_idx] == 'R' ? b_pos+1 : b_pos-1;
        t2[b_idx]--;
        b_idx = t2[b_idx] == 0 ? b_idx+1 : b_idx;

        // 인덱스 끝까지 갔거나 A와 B가 만나면 정답 반환
        if (a_pos == b_pos) {
            cout << time;
            return 0;
        }
        else if (a_idx == n || b_idx == m) {
            cout << -1;
            return 0;
        }

        time++;
    }
    return 0;
}