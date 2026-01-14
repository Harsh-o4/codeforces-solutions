//1900. Cover in Water

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s; cin>>s;
    int empty = 0;
    bool cons3 = false;
    for(int i = 0; i < n; ++i){
        if(s[i]=='.')   ++empty;

        if(i>1 && s[i]=='.' && s[i-1]=='.' && s[i-2]=='.')  cons3 = true;
    }

    if(cons3)   cout<<2<<endl;
    else    cout<<empty<<endl;

}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }

    return 0;
}