#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("cowqueue.in","r",stdin);//read file
	freopen("cowqueue.out","w",stdout);//output file
	int n,time_now=0;
	cin>>n;
	int enter[n],duration[n];
	for (int i=0;i<n;i++)//read data
	{
		cin>>enter[i]>>duration[i];
	}
	for (int i=0;i<n-1;i++)//sort
	{
		for (int j=0;j<n-1;j++)
		{
			if (enter[j]>enter[j+1])
			{
				int temp1=enter[j],temp2=duration[j];
				enter[j]=enter[j+1],duration[j]=duration[j+1];
				enter[j+1]=temp1,duration[j+1]=temp2;
			}
		}
	}
	
	time_now=enter[0];
	for (int i=0;i<n;i++)
	{
		if (time_now < enter[i])
		{
			time_now=enter[i];
		}
		time_now += duration[i];
	}
	cout<<time_now<<endl;
}