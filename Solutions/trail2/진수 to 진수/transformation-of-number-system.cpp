#include <iostream>
#include <algorithm>
using namespace std;

int a, b;
string n;

// n진수를 10진수로
int nToDec(int n, string num) {
    int dec_num = 0;

    for(int i=0; i<num.length(); i++) {
        dec_num = dec_num*n + int(num[i]-48);
    }
    return dec_num;
}

// 10진수를 n진수로
string decToN(int n, int num) {
    string n_num = "";

    while(num>=n) {
        n_num += char((num%n)+48);
        num /= n;
    }
    n_num += char(num+48);
    reverse(n_num.begin(), n_num.end());

    return n_num;
}

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    cout << decToN(b, nToDec(a, n));
    return 0;
}