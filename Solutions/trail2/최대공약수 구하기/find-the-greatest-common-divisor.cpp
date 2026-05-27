#include <iostream>

using namespace std;

int n, m;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    cout << gcd(n, m);
    return 0;
}