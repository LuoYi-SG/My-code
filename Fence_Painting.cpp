#include <iostream>

using namespace std;

int main()
{
	freopen("paint.in","r",stdin);
	freopen("paint.out", "w",stdout);
	int FJ_start,FJ_end,B_end,B_start;
	cin>>FJ_start>>FJ_end;
	cin>>B_start>>B_end;
	if ((FJ_end>B_start && FJ_start<B_start) || (FJ_end==B_start && FJ_start<B_start))
	{
		if (B_end>FJ_end) cout<<B_end-FJ_start<<endl;
		if (B_end<FJ_end) cout<<FJ_end-B_start<<endl;
	}
	else if (FJ_end<B_start)
	{
		cout<<FJ_end-FJ_start+B_end-B_start<<endl;
	}
	else if ((FJ_end>B_start && FJ_start>B_start) || (FJ_end==B_start && FJ_start>B_start))
	{
		if (B_end>FJ_end) cout<<FJ_end-B_start<<endl;
		if (FJ_end>B_end) cout<<B_end-FJ_start<<endl;
	}
	else if (FJ_end==B_end && FJ_start==B_start)
	{
		cout<<FJ_end-FJ_start<<endl;
	}
}
