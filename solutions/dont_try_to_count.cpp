//1881A. Don't Try to Count

#include <bits/stdc++.h>
#include<string>
using namespace std;

bool check(string x, string s){
    if(x==s)    return true;

    if(x.find(s) != string::npos) return true;

    return false;
}

void solve(){
    int n1,n2;
    cin>>n1>>n2;

    string x,s;
    cin>>x;
    cin>>s;

    string x1  = x + x;
    string x2 = x1 + x1;
    string x3 = x2 + x2;
    string x4 = x3 + x3;
    string x5 = x4 + x4;

    int ans = -1;

    if(check(x,s))  ans=0;
    else if (check(x1,s))   ans=1;
    else if (check(x2,s))   ans=2;
    else if (check(x3,s))   ans=3;
    else if (check(x4,s))   ans=4;
    else if (check(x5,s))   ans=5;
    
    cout<<ans<<endl;
    
}

int main(){
    int nt;
    cin>>nt;

    while(nt--) solve();

    return 0;
}