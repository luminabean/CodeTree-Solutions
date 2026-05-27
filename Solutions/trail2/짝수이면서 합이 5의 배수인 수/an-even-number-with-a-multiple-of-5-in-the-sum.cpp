#include <iostream>

using namespace std;

int n;

bool check(int n) {
    return (n % 2 == 0) && ((n / 10 + n % 10) % 5 == 0);
}
int main() {
    cin >> n;

    // Please write your code here.
    string msg = check(n) ? "Yes" : "No";
    cout << msg;
    return 0;
}