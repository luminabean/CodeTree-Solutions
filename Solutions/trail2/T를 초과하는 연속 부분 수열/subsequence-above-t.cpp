#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = 0, streak = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i+1]) {
            if (arr[i] > t)
                streak++;
            else
                streak = 0;
        }
        else {
            if (arr[i] > t)
                streak++;
            else
                streak = 0;
        }
        ans = ans < streak ? streak : ans;
    }
    cout << ans;
    return 0;
}