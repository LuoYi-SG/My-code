#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("measurement.in","r",stdin);
    //freopen("measurement.out","w",stdout);
    int N;
    int ans=0;
    cin>>N;
    int date[N],oper[N];
    string name[N];
    //input
    for (int i=0; i<N; i++) {
        cin>>date[i]>>name[i]>>oper[i];
    }
    //sort
    for (int i=0; i<N-1; i++) {
        for (int j=0; j<N-1; j++) {
            if (date[j]>date[j+1]) {
                int c1=date[j];
                string c2=name[j];
                int c3=oper[j];
                date[j]=date[j+1],name[j]=name[j+1],oper[j]=oper[j+1];
                date[j+1]=c1,name[j+1]=c2,oper[j+1]=c3;
            }
        }
    }
    bool board[3]= {1,1,1};
    //create cowname & milk
    string cowname[3]= {"Bessie","Elsie","Mildred"};
    int milk[3]= {7,7,7};
    for (int i=0; i<N; i++) {
        bool temp[3];
        for (int j=0; j<3; j++) {
            temp[j]=board[j];
        }
        for (int j=0; j<3; j++) {
            if (name[i]==cowname[j]) {
                milk[j]+=oper[i];
                break;
            }
        }
        int maxm=max(milk[0],milk[1]);
        maxm=max(maxm,milk[2]);
        for (int j=0; j<3; j++) {
            if (milk[j]==maxm) {
                board[j]=1;
            } else {
                board[j]=0;
            }
        }
        for (int j=0; j<3; j++) {
            if (board[j]!=temp[j]) {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}
