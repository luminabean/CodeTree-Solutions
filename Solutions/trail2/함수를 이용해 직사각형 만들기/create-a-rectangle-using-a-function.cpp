#include <iostream>

using namespace std;

int n, m;

void rect(int n, int m) {
    while(n--) {
        for (int i = 0; i < m; i++)
            cout << "1";
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    rect(n, m);
    return 0;
}