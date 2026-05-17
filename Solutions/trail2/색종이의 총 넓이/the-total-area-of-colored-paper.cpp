#include <iostream>

using namespace std;

int N;
int x, y;

int main() {
    cin >> N;

    int coord[200][200] = {{0, }, };

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        for (int xt = x+100; xt < x+108; xt++) {
            for (int yt = y+100; yt < y+108; yt++) {
                coord[xt][yt] = 1;
            }
        }
    }

    int ans = 0;

    for (int xt = 0; xt < 200; xt++) {
        for (int yt = 0 ; yt < 200; yt++)
            ans = coord[xt][yt] == 1 ? ans+1 : ans;
    }
    cout << ans;
    return 0;
}