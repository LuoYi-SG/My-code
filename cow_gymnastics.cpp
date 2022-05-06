#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int K, N;
    cin >> K >> N; //input;
    int order [K] [N];
    int counter = 0;
    for (int i = 0; i < K; i ++)
    {
        for (int j = 0; j < N; j ++)
        {
            cin >> order [i] [j];
        }
    }
    int cows [N]; //step 2
    for (int i = 0; i < N; i ++)
    {
        cows [i] = i + 1;
    }
    for (int i = 0; i < N; i ++) //step 3
    {
        for (int j = 0; j < N; j ++)
        {
            cout << i << " " << j << "#\n";
            int temp = 0;
            for (int l = 0; l < K; l ++)
            {
                int temp1 = 0;
                for (int m = 0; m < K; m ++)
                {
                    for (int a = 0; a < N; a ++)
                    {
                        if (cows [i] == order [m] [a])
                        {
                            temp1 ++;
                            break;
                        }
                    }
                }
                if (temp1 == K)
                {
                    temp ++;
                    cout << cows [i] << " " << cows [j] << "\n";
                    continue;
                }
                temp1 = 0;
                for (int m = 0; m < K; m ++)
                {
                    for (int a = 0; a < N; a ++)
                    {
                        if (cows [j] == order [m] [a])
                        {
                            temp1 ++;
                            cout << order [m] [a] << "\n";
                            break;
                        }
                    }
                }
                if (temp1 == K)
                {
                    temp ++;
                    cout << cows [i] << " " << cows [j] << "\n";
                    break;
                }
            }
            if (temp == K)
            {
                counter ++; //step 4;
            }
        }
    }
    cout << counter; //step 5
    // OK we are now done, let's test
}
