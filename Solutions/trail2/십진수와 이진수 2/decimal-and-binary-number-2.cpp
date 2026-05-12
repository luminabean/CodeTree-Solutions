#include <iostream>
#include <algorithm>
using namespace std;

string N;

int toDecimal(string N) {
    int dec_num = 0, digit = 1;

    for(int i=N.length()-1; i>=0; i--) {
        dec_num += int(N[i] - 48) * digit;
        digit *= 2;
    }
    return dec_num;
}

string toBinary(int N) {
    string bin_num = "";

    while(N >= 2) {
        bin_num += char(N%2 + 48);
        N /= 2;
    }
    bin_num += char(N + 48);
    reverse(bin_num.begin(), bin_num.end());
    return bin_num;
}

int main() {
    cin >> N;

    // Please write your code here.
    int N_dec = toDecimal(N);
    N_dec *= 17;
    cout << toBinary(N_dec);
    return 0;
}