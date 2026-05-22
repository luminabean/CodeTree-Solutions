#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int ans = 0;

    for (int i = 0; i < A.length(); i++) {
        for (int j = i+1; j < A.length(); j++) {
            if (A[i] == '(' && A[j] == ')')
                ans++;
        }
    }
    cout << ans;
    return 0;
}