//1091A. Line Trip

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,maxd = 0;
    cin>>n>>k;

    long long a[n];
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        if(i>0){
            maxd = max(maxd,a[i]-a[i-1]);
        }
    }

    maxd = max(maxd, a[0]);
    maxd = max(maxd,(k-a[n-1])*2);

    cout<<maxd<<endl;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }

    return 0;
}