#include <bits/stdc++.h>
using namespace std;

int main(){
    int nt;
    cin>>nt;

    int x = 0;
    string s;

    while(nt--){
        cin>>s;

        if(s[1]=='+') ++x;
        if(s[1]=='-') --x;

    }

    cout<<x<<endl;
    return 0;
}