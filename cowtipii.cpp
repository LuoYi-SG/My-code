//This file should not be plagarised without the author's permission
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ifstream fin ("cowtip.in");
    ofstream fout ("cowtip.out");
    int N;
    fin >> N;
    bool cowstatus [10] [10];
    for (int i = 0; i < N; i ++) {
        char temp [N];
        fin >> temp;
        for (int j = 0; j < N; j ++) {
            cowstatus [i] [j] = temp [j] - '0';
        }
    }
    int ans = 0;
    for (int x = N - 1; x >= 0; x --) {
        for (int y = N - 1; y >= 0; y --) {
            if (cowstatus [x] [y] == 1) {
                for (int i = 0; i <= x; i ++) {
                    for (int j = 0; j <= y; j ++) {
                        cowstatus [i] [j] =! cowstatus [i] [j];
                    }
                }
                ans ++;
            }
        }
    }
    fout << ans;
    return 0;
}
