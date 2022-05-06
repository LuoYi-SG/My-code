#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    ll N, B;
    cin >> N >> B;
    ll x[N], y[N];
    ll M = B;
    for (ll i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    ll a, b;
    ll count1 = 0, count2 = 0;
    ll temp[4] = {
        0
    };

    for (ll ii = 0; ii < N; ii ++) {
        for (ll jj = 0; jj < N; jj ++) {
            a = x [ii] + 1, b = y [jj] + 1;
            for (ll i = 0; i < N; i++) {
                if (x[i] > a && y[i] > b) {
                    temp[0]++;
                } else if (x[i] > a && y[i] < b) {
                    temp[1]++;
                } else if (x[i] < a && y[i] > b) {
                    temp[2]++;
                } else if (x[i] < a && y[i] < b) {
                    temp[3]++;
                }
            }
            sort(temp, temp + 4, greater < ll > ());
            if (temp[0] < M) {
                M = temp[0];
            }
            for (ll j = 0; j < 4; j++) {
                temp[j] = 0;
            }
        }
    }
    cout << M << endl;
}
