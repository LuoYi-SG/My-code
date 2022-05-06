#include <bits/stdc++.h>

//difference between two points |x1-x2| + |y1-y2|
//ans = (|x1-x2| + |y1-y2|) - 1

using namespace std;

int main()
{
    ifstream fin ("buckets.in");
    ofstream fout ("buckets.out");
    char situation [10] [10];
    int Bx, By;
    int Lx, Ly;
    int Rx, Ry;
	for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            fin >> situation [i] [j];
            if (situation [i] [j] == 'B')
            {
                Bx = i;
                By = j;
            }
            if (situation [i] [j] == 'L')
            {
                Lx = i;
                Ly = j;
            }
            if (situation [i] [j] == 'R')
            {
                Rx = i;
                Ry = j;
            }
        }
    }
    //fout << Bx << " " << By << "\n" << Lx << " " << Ly << "\n" << Rx << " " << Ry << "\n";
    int ans = (abs (Bx - Lx) + abs (By - Ly)) - 1;
    if (By == Ly && Ly == Ry)
    {
        int dif1 = Lx - Rx, dif2 = Lx - Bx;
     //   fout << dif1 * dif2 << "\n";
        if (dif1 * dif2 > 0)
        {
             if (abs (dif1) < abs (dif2)) ans += 2;
        }
    }
    else if (Bx == Lx && Lx == Rx)
    {
        int dif1 = Ly - Ry, dif2 = Ly - By;
        if (dif1 * dif2 > 0)
        {
             if (abs (Ly - Ry) < abs (Ly - By)) ans += 2;
        }
    }
    fout << ans;
}
