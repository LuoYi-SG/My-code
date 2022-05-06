#include <bits/stdc++.h>

using namespace std;

int largest(int a[],int length)
{
	int l=0;
	for (int i=0;i<length;i++)
	{
		if (a[i]>l) l=a[i];
	}
	return l;
}

int main()
{
	freopen("blist.in","r",stdin);
	freopen("blist.out","w",stdout);
	int N;
	cin>>N;
	int maxbucket=0;
	int s[N],t[N],b[N];
	for (int i=0;i<N;i++)
	{
		cin>>s[i]>>t[i]>>b[i];
	}
//	cout<<largest(t,N)<<endl;
//	cout<<t[0]<<t[1]<<t[2]<<endl;
	for (int ti=1;ti<=largest(t,N);ti++)
	{
		int temp=0;
		for (int i=0;i<N;i++)
		{
			for (int j=0;j<b[i];j++)
			{
				if (ti>=s[i] && ti<=t[i])
				{
					temp+=1;
//					cout<<temp<<endl;
				}
			}
//			cout<<endl;
		}
		if (temp>maxbucket)
		{
			maxbucket=temp;
		}
//		cout<<endl;
	}
	cout<<maxbucket;
}
