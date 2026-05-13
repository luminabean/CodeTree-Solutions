#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    int arr[N+1];
    for(int i = 1; i <= N; i++)
        arr[i] = 0;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];

        for(int j = A[i]; j <= B[i]; j++)
            arr[j]++;
    }

    // Please write your code here.
    int ans = 0;
    for(int i = 1; i <= N; i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    cout << ans;
    
    return 0;
}