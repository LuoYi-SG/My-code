#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen("billboard.in","r",stdin);
    //freopen("billboard.out","w",stdout);
    int fbill[2][2],sbill[2][2],truck[2][2];
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin>>fbill[i][j];
        }
    }
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin>>sbill[i][j];
        }
    }
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin>>truck[i][j];
        }
    }
    int area=0,area1=0;
    for (int i=fbill[0][0]; i<fbill[1][0]; i++) {
        for (int j=fbill[0][1]; j<fbill[1][1]; j++) {
            if ((truck[0][0]<=i && i<truck[1][0]) && (truck[0][1]<=j && j<truck[1][1])) continue;
            else area++;
        }
    }
    for (int i=sbill[0][0]; i<sbill[1][0]; i++) {
        for (int j=sbill[0][1]; j<sbill[1][1]; j++) {
            if ((truck[0][0]<=i && i<truck[1][0]) && (truck[0][1]<=j && j<truck[1][1])) continue;
            else area1++;
        }
    }
    cout<<area1+area<<endl;
}
