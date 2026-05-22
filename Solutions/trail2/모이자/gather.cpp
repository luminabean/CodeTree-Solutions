#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min_sum = 10000000;
    for (int i = 0; i < n; i++) {
        int sum_diff = 0;

        for (int j = 0; j < n; j++)
            sum_diff += A[j] * abs(j-i);
        
        min_sum = min(min_sum, sum_diff);
    }
    cout << min_sum;
    return 0;
}