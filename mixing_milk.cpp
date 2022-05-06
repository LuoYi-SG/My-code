#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	int price=0;
	cin>>N>>M;
	int P[5000],A[5000];
	for (int i=0;i<M;i++)
	{
		cin>>P[i]>>A[i];
	}
	for (int i=0;i<M-1;i++)
	{
		for (int j=0;j<M-1;j++)
		{
			if (P[j]>P[j+1])
			{
				int c=P[j],c1=A[j];
				P[j]=P[j+1],A[j]=A[j+1];
				P[j+1]=c,A[j+1]=c1;
			}
		}
	}
	for (int i=0;i<M;i++)
	{
		while (A[i]!=0 && N!=0)
		{
			price+=P[i];
			N-=1;
			A[i]-=1;
		}
	}
	cout<<price<<endl;
}
