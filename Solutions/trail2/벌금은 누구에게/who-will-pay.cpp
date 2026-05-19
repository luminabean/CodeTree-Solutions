#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Please write your code here.
    int panelty[N] = {0, };
    for (int i = 0; i < M; i++) {
        panelty[student[i]]++;

        if (panelty[student[i]] == K) {
            cout << student[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}