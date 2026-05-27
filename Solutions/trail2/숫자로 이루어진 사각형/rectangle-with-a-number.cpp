#include <iostream>
using namespace std;

void makeSquare(int N) {
    int num = 1;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << num++ << " ";

            if(num == 10)
                num = 1;
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    makeSquare(N);
    return 0;
}