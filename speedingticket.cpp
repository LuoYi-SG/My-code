#include <bits/stdc++.h>

using namespace std;

int main ()
{
    freopen ("speeding.in", "r", stdin);
    freopen ("speeding.out", "w", stdout);
    int N, M;
    cin >> N >> M;
    int seg [N], speed [N];
    int bseg [M], bspeed [M];
    for (int i = 0; i < N; i ++)
    {
        cin >> seg [i] >> speed [i];
    }
    for (int i = 0; i < M; i ++)
    {
        cin >> bseg [i] >> bspeed [i];
    }
    int ans = 0;
    int limit [100] = {0}, bessie [100];
    int position = 0;
    for (int i = 0; i < N; i ++)
    {
        for (int j = position; j < position + seg [i]; j ++)
        {
            limit [j] = speed [i];
        }
        position += seg [i];
    }
    position = 0;
    for (int i = 0; i < M; i ++)
    {
        for (int j = position; j < position + bseg [i]; j ++)
        {
            bessie [j] = bspeed [i];
        }
        position += bseg [i];
    }
    for (int i = 0; i < 100; i ++)
    {
        if (bessie [i] - limit [i] > ans)
        {
            ans = bessie [i] - limit [i];
        }
    }
    cout << ans;
}
