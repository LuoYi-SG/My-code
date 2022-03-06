//This file should not be plagarised without the author's permission
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main ()
{
    int numbers [10];
    for (int i = 1; i <= 10; i ++) numbers [i - 1] = i;
    char letters [52];
    for (int i = 0; i < 26; i ++) letters [i] = 'a' + i;
    for (int i = 26; i < 52; i ++) letters [i] = 'A' + i - 26;
    char special [15] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*' , '|', '?', '/', ',', '.'};
    cout << "Best password generator\n";
    while (true)
    {
        string output = "";
        int length;
        cout << "Length: ";
        cin >> length;
        cout << "Generating ... \n";
        Sleep (500);
        for (int i = 0; i < length; i ++)
        {
            int x = rand();
            x %= 3;
            if (x == 0)
            {
                x = rand();
                x %= 15;
                output += special [x];
            }
            else if (x == 1)
            {
                x = rand();
                x %= 10;
                char temp = numbers [x] + '0';
                output += temp;
            }
            else if (x == 2)
            {
                x = rand();
                x %= 52;
                output += letters [x];
            }
        }
        cout << output << "\n";
    }
}
