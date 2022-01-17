#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string spot [N], plain [N];
    for (int i = 0; i < N; i ++) {
        cin >> spot [i];
    }
    for (int i = 0; i < N; i ++) {
        cin >> plain [i];
    }
    for (int i = 0; i < N; i ++) {
        int temp = 0;
        char temp1 = spot [i] [0];
        for (int j = 0; j < M; j ++) {
            if (temp1 == spot [i] [j]) {
                temp ++;
            }
        }
        if (temp == M) {
            cout << i + 1;
            return 0;
        }
        temp = 0;
        temp1 = plain [i] [0];
        for (int j = 0; j < M; j ++) {
            if (temp1 == plain [i] [j]) {
                temp ++;
            }
        }
        cout << temp << " " << M << "\n";
        if (temp == M) {
            cout << i + 1;
            return 0;
        }
    }
}
