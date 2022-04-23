#include <bits/stdc++.h>

using namespace std;

int main(void) {
    char answer [3] [3], guess [3] [3];
    int green = 0, yellow = 0;
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            cin >> answer [i] [j];
        }
    }
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            cin >> guess [i] [j];
        }
    }
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            if (answer [i] [j] == guess [i] [j]) {
                green ++;
                answer [i] [j] = 0, guess [i] [j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            if (answer [i] [j] == 0) continue;
            for (int i1 = 0; i1 < 3; i1 ++) {
                for (int j1 = 0; j1 < 3; j1 ++) {
                    if (i1 == i && j1 == j) continue;
                    else if (guess [i1] [j1] == 0) continue;

                    if (guess [i1] [j1] == answer [i] [j]) {
                        yellow ++;
                        guess [i1] [j1] = 0, answer [i] [j] = 0;
                    }
                }
            }
        }
    }
    cout << green << "\n" << yellow;
	return 0;
}
