//This file should not be plagarised without the author's permission
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    int id [N];
    int odd = 0, even = 0;
    for (int i = 0; i < N; i ++) {
        cin >> id [i];
        if (id [i] % 2 == 1) odd ++;
        else even ++;
    }
    int ans = min (odd, even) * 2;
    if (odd > even) {
        int temp = odd - even;
        int groupsof3 = temp / 3;
        int remain = temp % 3;
        ans += groupsof3 * 2;
        if (remain == 1) ans -= 1;
        else if (remain == 2) ans ++;
    }
    else if (even > odd) {
        ans ++;
    }
    cout << ans;
	return 0;
}
