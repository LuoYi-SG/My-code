#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
	int n,k;
	cin>>n>>k;
	int d[n];
	for (int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	sort(d,d+n);
	int max=0;
	for (int i=0;i<n;i++)
	{
		int j=i;
		while (d[j]-d[i]<=k && j<n)
		{
			j++;
		}
		if (max<j-i)
		{
			max=j-i;
		}
	}
	cout<<max<<endl;
}