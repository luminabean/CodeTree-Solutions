#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int start_time = 11 + 11*60 + 11*60*24;
    int end_time = c + b*60 + a*60*24;
    cout << max(-1, end_time - start_time);
    return 0;
}