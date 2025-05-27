//61A. Ultra-Fast Mathematician

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;

    for(int i = 0; i < s.size(); ++i){
        if(s[i]!=t[i])  cout<<1;
        else cout<<0;
    }

    cout<<endl;
    return 0;
}