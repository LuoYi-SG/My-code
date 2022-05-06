#include <bits/stdc++.h>

using namespace std;

int main()
{
	int input[7];
	for (int i=0;i<7;i++)
	{
		cin>>input[i];
	}
	bool flag=false;
	sort(input,input+7);
	int A,B,C;
	for (int i=0;i<4;i++)
	{
		A=input[i];
		for (int j=i+1;j<5;j++)
		{
			B=input[j];
			for (int k=j+1;k<7;k++)
			{
				if (input[k]==A+B)
				{
					flag=true;
					break;
				}
			}
			if (not flag)
			{
				continue;
			}
			flag=false;
			for (int k=j+1;k<6;k++)
			{
				C=input[k];
				if (input[6]==A+B+C)
				{
					flag=true;
					break;
				}
			}
			if (flag) break;
		}
		if (flag) break;
	}
	cout<<A<<" "<<B<<" "<<C<<endl;
}
