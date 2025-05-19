//1328A. Divisibility Problem

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;

    if(a%b==0)  cout<<0;
    else{
         cout<<((a/b)+1)*b-a;
    }

    cout<<endl;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }

    return 0;
}