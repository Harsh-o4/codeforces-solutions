//1896A. Jagged Swaps

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    bool ispossible = true;

    int a[n];
    for(int i = 0; i<n; ++i){
        cin>>a[i];

        if(a[0] != 1) ispossible = false;
    }

    if(ispossible)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--) solve();


    return 0;
}