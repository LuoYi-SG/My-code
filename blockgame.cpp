#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("blocks.in","r",stdin);
	freopen("blocks.out","w",stdout);
	int N;
	cin>>N;
	int ans[26]={0};
	string front[N],back[N];
	for (int i=0;i<N;i++)
	{
		cin>>front[i]>>back[i];
	}

	for (int i=0;i<N;i++)
	{
		int count[26]={0};
		for (int j=0;j<26;j++)
		{
			char f=j+'a';
			int lf=0,lb=0;
			for (int k=0;k<front[i].length();k++)
			{
				if (front[i][k]==f) lf++;
//				cout<<f<<"*\n";
//				cout<<front[i][k]<<"^\n";
//				cout<<lf<<"(\n";
//				cout<<lf<<" ";
			}
			for (int k=0;k<back[i].length();k++)
			{
				if (back[i][k]==f) lb++;
//				cout<<lb<<" ";
			}
//			cout<<"\n";
			count[j]=max(lf,lb);
		}
		for (int j=0;j<26;j++)
		{
			ans[j]+=count[j];
//			cout<<ans[j]<<" ";
		}
	}
	for (int m=0;m<26;m++)
	{
		cout<<ans[m]<<endl;
	}
}
