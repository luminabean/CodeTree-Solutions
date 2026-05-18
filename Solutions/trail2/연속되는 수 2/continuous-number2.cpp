#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = 0, streak = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i-1] != arr[i]) {
            if (ans < streak)
                ans = streak;
            streak = 1;
        }
        else
            streak++;
    }
    ans = ans < streak ? streak : ans;
    cout << ans;
    return 0;
}