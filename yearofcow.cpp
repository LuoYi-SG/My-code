#include <bits/stdc++.h>

using namespace std;

string get_animal(int year)
{
  int a = 0, y = 2021;
  while (y < year) { y++; a++; if (a == 12) a = 0; }
  while (y > year) { y--; a--; if (a == -1) a = 11; }
  return animals[a];
}

int main ()
{
    int N;
    cin >> N;
    string firstn [N], order [N], year [N], lastn [N];
    {
        cin >> firstn [i];
        cin >> order [i] >> order [i] >> order [i];
        cin >> year [i];
        cin >> lastn [i] >> lastn [i] >> lastn [i];
    }
    string zodiac [12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    for (int i = 0; i < N; i ++)
    {

    }
}
