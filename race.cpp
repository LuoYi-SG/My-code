#include <bits/stdc++.h>

using namespace std;

int solve(int d)
{
	int min;
	cin>>min;
	int lhstravel=0;
	int rhstravel=0;
	int time=0;
	for (int current=1;;current++) 
	{
		lhstravel+=current;
		time++;
		if (lhstravel+rhstravel>=d) return time;
		if (current>=min)
		{
		    rhstravel+=current;
		    time++;
		    if (lhstravel+rhstravel>=d) return time;
		}
	}
}

int main() {
	freopen("race.in","r",stdin);
	freopen("race.out","w",stdout);
	int k,n;
	cin>>k>>n;
	for(int i=0;i<n;i++)
	{
		cout<<solve(k)<<endl;
	}
}
