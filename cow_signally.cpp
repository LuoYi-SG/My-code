#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int M,N,K;
    cin>>M>>N>>K;
    string signal[M];
    for (int i=0; i<M; i++) {
        cin>>signal[i];
    }
    int count=0;
    for (int i=0; i<M; i++) {
        for (int k=0; k<K; k++) {
            for (int j=0; j<N; j++) {
                for (int x=0; x<K; x++) cout<<signal[i][j];
            }
            cout<<endl;
        }
    }
}
