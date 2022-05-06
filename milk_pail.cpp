#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("pails.in","r",stdin);
	freopen("pails.out","w",stdout);
	int x,y,m;
	cin>>x>>y>>m;
	int result=0;
	for (int i=0;i<m/y;i++)
	{	
		int temp=m;
		temp-=i*y;
		temp%=x;
		temp=m-temp;
		if (temp>result)
		{
			result=temp;
		} 
	}
	
	for (int i=0;i<m/x;i++)
	{	
		int temp=m;
		temp-=i*x;
		temp%=y;
		temp=m-temp;
		if (temp>result)
		{
			result=temp;
		} 
	}
	cout<<result<<endl;
}