#include <iostream>
#include <string>

using namespace std;

string T;  // 문자열
string P;  // 부분 문자열
int f[100000]; // 상태 전이 함수


// 상태 전이 함수 작성
void kmpPreprocess() {
    int i = -1, j = 0;  // i = f[j], j = 현재 인덱스
    f[0] = -1;  // 시작 위치의 상태 전이 함수는 -1

    // j > n이 될 때까지 반복
    while (j < P.size()) {
        // P[i] == P[j]이거나 i == -1이면 한 칸씩 전진한 뒤, j 위치에 i를 저장
        if (P[i] == P[j] || i == -1)
            f[++j] = ++i;
        // 아니라면 i는 상태 전이 함수에 있는 값
        else
            i = f[i];
    }
}

int kmp() {
    int i = 0, j = 0;  // i = T의 현재 인덱스, j = P의 현재 인덱스
    int ans = 0;       // 정답 (P가 T 안에 있는 횟수)

    // i < n이 될 때까지 반복
    while (i < T.size()) {
        // T[i] == P[j]이거나 j == -1일 때 한 칸씩 전진한 뒤, j 위치에 i를 저장한다.
        if (T[i] == P[j] || j == -1) { i++; j++; }
        // T[i] != P[j]라면 j는 상태 전이 함수에 있는 값으로 전환시킨다.
        else
            j = f[j];

        // P가 T 안에 있다면 ans를 1 증가시킨다.
        if (j == P.size()) {
            ans++;
            j = f[j];
        }
    }

    return ans;
}

int main() {
    cin >> T;
    cin >> P;

    // Please write your code here.
    kmpPreprocess();
    cout << kmp();

    return 0;
}