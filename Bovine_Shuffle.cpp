#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);
	int n;
	cin>>n;
	int order[1+n],a[1+n],ori_order[n+1];
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		cin>>order[i];
	}
	
	for (int i=0;i<3;i++)
	{
		for (int j=1;j<=n;j++)
		{
			ori_order[j]=order[a[j]];
		}
		for (int k=1;k<=n;k++)
		{
			order[k]=ori_order[k];
		}
	}
	for (int i=1;i<=n;i++)
	{
		cout<<ori_order[i]<<endl;
	}
}