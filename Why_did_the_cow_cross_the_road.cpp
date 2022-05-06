#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("crossroad.in","r",stdin);
	freopen("crossroad.out","w",stdout);
	int n;
	cin>>n;
	int observations[n][2];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>observations[i][j];
		}
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1;j++)
		{
			if (observations[j][0]>observations[j+1][0])
			{
				int c=observations[j][0],c2=observations[j][1];
				observations[j][0]=observations[j+1][0],observations[j][1]=observations[j+1][1];
				observations[j+1][0]=c,observations[j+1][1]=c2;
			}
		}
	}
	int crosses=0;
	for (int i=0;i<n-1;i+=2)
	{
		if (observations[i][1]!=observations[i+1][1])
		{
			crosses+=1;
		}
	}
	cout<<crosses<<endl;
}