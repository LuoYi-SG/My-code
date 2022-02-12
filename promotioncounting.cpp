//This file should not be plagarised without the author's permission
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ifstream fin ("promote.in");
    ofstream fout ("promote.out");
    int before [4], after [4];
    for (int i = 0; i < 4; i ++) {
        fin >> before [i] >> after [i];
    }
    int increase [3] = { 0 };
    increase [2] = after [3] - before [3];
    increase [1] = after [2] + increase [2] - before [2];
    increase [0] = after [1] + increase [1] - before [1];
    fout << increase [0] << "\n" << increase [1] << "\n" << increase [2] << "\n";
    return 0;          
}
