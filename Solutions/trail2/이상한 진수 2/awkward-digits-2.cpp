#include <iostream>
#include <algorithm>
using namespace std;

string a;

int toDecimal(string bin) {
    int dec = 0;
    
    for (int i = 0; i < bin.length(); i++)
        dec = dec*2 + (bin[i] - '0');

    return dec;
}

int main() {
    cin >> a;

    // Please write your code here.
    int max_num = 0;

    for (int i = 0; i < a.length(); i++) {
        string tmp = a;
        tmp[i] = a[i] == '0' ? '1' : '0';

        max_num = max(max_num, toDecimal(tmp));
    }
    cout << max_num;
    return 0;
}