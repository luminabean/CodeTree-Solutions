#include <iostream>

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }

    // Please write your code here.
    int a_pos = 0, b_pos = 0;
    int a_tmp = 0, b_tmp = 0;
    int a_idx = 0, b_idx = 0;
    int cnt = 0;

    a_pos = d[0] == 'L' ? a_pos-1 : a_pos+1;
    b_pos = d_b[0] == 'L' ? b_pos-1 : b_pos+1;
    t[0]--; t_b[0]--;
    a_idx = t[0] == 0 ? a_idx+1 : a_idx;
    b_idx = t_b[0] == 0 ? b_idx+1 : b_idx;

    while (1) {
        if (a_idx < n) {
            a_tmp = a_pos;
            a_pos = d[a_idx] == 'L' ? a_pos-1 : a_pos+1;
        }
        if (b_idx < m) {
            b_tmp = b_pos;
            b_pos = d_b[b_idx] == 'L' ? b_pos-1 : b_pos+1;
        }
        t[a_idx]--; t_b[b_idx]--;
        a_idx = t[a_idx] == 0 ? a_idx+1 : a_idx;
        b_idx = t_b[b_idx] == 0 ? b_idx+1 : b_idx;

        if (a_tmp != b_tmp && a_pos == b_pos)
            cnt++;

        if (a_idx == n && b_idx == m)
            break;
        a_tmp = a_pos; b_tmp = b_pos;
        //cout << a_pos << " " << b_pos << " " << cnt << "\n";
    }
    cout << cnt;
    return 0;
}