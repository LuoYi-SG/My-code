#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("whereami.in", "r", stdin);
    freopen ("whereami.out", "w", stdout);
    int N;
    char name [100];
    cin >> N >> name;
    int K;
    bool flag;
    for (int i = 1; i <= N; i ++)
    {
        char temp [100] = {0};
        for (int j = 0; j < i; j ++)
        {
            temp [j] = name [j];
        }
       // cout << temp << " temp\n";
        int repeat = 0;
        for (int j = i; j <= N-i; j ++)
        {
            char temp1 [100] = {0};
            for (int m = 0; m < i; m ++)
            {
                temp1 [m] =  name [m + j];
            }
           // cout << temp1 << " temp1\n";
            flag = true; // true - they are same arrary
            for (int m = 0; m < i; m ++)
            {
                if (temp [m] != temp1 [m])
                {
                    flag = false;
                }
            }
            if (flag == true)
            {
                repeat ++;
                break;
            }
        }
       // cout << repeat << "\n";
        if (repeat == 0)
        {
            K=i;
            break;
        }
    }
    cout << K;
}
