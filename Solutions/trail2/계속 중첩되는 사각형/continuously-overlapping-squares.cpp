#include <iostream>
#include <string>
using namespace std;

int n;
int x1, y1;
int x2, y2;

int main() {
    cin >> n;

    string coord[200][200] = {{"None", }, };

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int x = x1+100; x < x2+100; x++) {
            for (int y = y1+100; y < y2+100; y++) {
                // i가 짝수면 빨강, 홀수면 파랑
                coord[x][y] = i % 2 == 0 ? "Red" : "Blue";
            }
        }
    }

    int ans = 0;

    for (int x = 0; x < 200; x++) {
        for (int y = 0; y < 200; y++) {
            if (coord[x][y] == "Blue") {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}