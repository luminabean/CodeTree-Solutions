#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int coord[200];  // -100 = 0, 100 = 200
    for (int i = 0; i < 200; i++) {
        coord[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            coord[j+100]++;
        }
    }

    int ans = 0;
    for(int i = 0; i < 200; i++) {
        if(ans < coord[i])
            ans = coord[i];
    }
    cout << ans;
    return 0;
}