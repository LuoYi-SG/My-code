#include <bits/stdc++.h>

using namespace std;

int main ()
{
    freopen ("breedflip.in", "r", stdin);
    freopen ("breedflip.out", "w", stdout);
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;
    int ans = 0;
    bool flag = false;
    for (int i = 0; i < N; i ++)
    {
        if (A [i] != B [i])
        {
          if (!flag)
          {
            flag = true;
            ans ++;
          }
        }
        else
        {
          flag = false;
        }
    }
    cout << ans;
}
