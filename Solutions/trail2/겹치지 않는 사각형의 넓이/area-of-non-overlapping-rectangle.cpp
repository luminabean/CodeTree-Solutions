#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    int coord[2000][2000] = {{0, }, };
    
    // 직사각형 A, B는 1로 표시함
    for (int i = 0; i <= 1; i++) {
        for (int x = x1[i]+1000; x < x2[i]+1000; x++) {
            for (int y = y1[i]+1000; y < y2[i]+1000; y++) {
                coord[x][y] = 1;
            }
        }
    }

    // 직사각형 M은 0으로 표시함 -> 지우기!
    for (int x = x1[2]+1000; x < x2[2]+1000; x++) {
        for (int y = y1[2]+1000; y < y2[2]+1000; y++) {
            coord[x][y] = 0;
        }
    }

    // 값이 1인 칸만 계산하기
    int ans = 0;
    for (int x = 0; x < 2000; x++) {
        for (int y = 0; y < 2000; y++) {
            ans = coord[x][y] == 1 ? ans+1 : ans;
        }
    }
    cout << ans;
    return 0;
}