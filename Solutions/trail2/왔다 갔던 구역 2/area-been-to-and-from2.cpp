#include <iostream>
using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int coord[2001] = {0, }; // 10 * 100 = 1000이므로 -1000 ~ 1000까지 필요
    int cur_coord = 100; // 현재 좌표

    // 명령을 하나씩 확인
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x[i]; j++) {
            if (dir[i] == 'R')
                coord[cur_coord++]++;
            else
                coord[--cur_coord]++; // 전위감소인 이유: [a, b]일 때 a부터 b-1까지만 계산을 하기 때문
        }
        //cout << "\n";
    }

    int ans = 0;

    // 2번 이상 지나간 영역 확인
    for (int i = 0; i < 2001; i++) {
        if (coord[i] >= 2)
            ans++;
    }
    cout << ans;

    return 0;
}