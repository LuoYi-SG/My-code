#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("herding.in", "r", stdin);
    freopen ("herding.out", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);
    if (c == a + 2) cout << "0\n";
    else if (b == a + 2 || c == b + 2) cout << "1\n";
    else cout << "2\n";
    cout << max(b-a, c-b) - 1 << "\n";
}
