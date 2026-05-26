#include <iostream>

using namespace std;

int N;

int sumN(int N) {
    return (N*(N+1) / 2) / 10;
}

int main() {
    cin >> N;

    // Please write your code here.'
    cout << sumN(N);
    return 0;
}