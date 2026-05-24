#include <iostream>
#include <algorithm>
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min_dist = 1000000000;
    for (int s = 1; s < n-1; s++) {
        int dist = 0;
        for ( int i = 0; i < n-1; i++) {
            // s번째 체크포인트를 건너 뜀
            if (i == s) {
                dist -= abs(x[i-1]-x[i]) + abs(y[i-1]-y[i]);
                dist += abs(x[i-1]-x[i+1]) + abs(y[i-1]-y[i+1]);
            }
            else
                dist += abs(x[i]-x[i+1]) + abs(y[i]-y[i+1]);
            //cout << s << " " << i << " " << dist << endl;
        }
        min_dist = min(min_dist, dist);
    }
    cout << min_dist;
    return 0;
}