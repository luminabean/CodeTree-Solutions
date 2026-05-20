#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }

    // Please write your code here.
    int idx_a = 0, idx_b = 0;  // 현재 인덱스
    int a_pos = v[idx_a], b_pos = v2[idx_b];  // 현재 위치
    int poll = 0; // -1: A, 0 = 공동, 1 = B
    int ans = 0;
    if (a_pos > b_pos) {
        poll = -1;
        ans++;
    }
    else if (a_pos < b_pos) {
        poll = 1;
        ans++;
    }
    t[idx_a]--; t2[idx_b]--;
    idx_a = t[idx_a] == 0 ? idx_a+1 : idx_a;
    idx_b = t2[idx_b] == 0 ? idx_b+1 : idx_b;

    while (1) {
        a_pos += v[idx_a]; b_pos += v2[idx_b];
        t[idx_a]--; t2[idx_b]--;
        idx_a = t[idx_a] == 0 ? idx_a+1 : idx_a;
        idx_b = t2[idx_b] == 0 ? idx_b+1 : idx_b;

        if (a_pos > b_pos) {
            if (poll != -1)
                ans++;
            poll = -1;
        }
        else if (a_pos == b_pos) {
            if (poll != 0)
                ans++;
            poll = 0;
        }
        else {
            if (poll != 1)
                ans++;
            poll = 1;
        }
        //cout << a_pos << " " << b_pos << " " << poll << "\n";
        
        if (idx_a == N || idx_b == M)
            break;
    }
    cout << ans;
    return 0;
}