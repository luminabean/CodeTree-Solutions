#include <iostream>
using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.
    int coord[200][200] = {{0, }, };

    for (int i = 0; i < N; i++) {
        for (int y = y1[i]+100; y < y2[i]+100; y++) {
            for (int x = x1[i]+100; x < x2[i]+100; x++) {
                coord[x][y] = 1;
                //cout << x-100 << " " << y-100 << "\n";
            }
        }
    }

    int ans = 0;
    for (int y = 0; y < 200; y++) {
        for (int x = 0; x < 200; x++)
            ans = coord[y][x] == 1 ? ans+1 : ans;
    }
    cout << ans;
    return 0;
}