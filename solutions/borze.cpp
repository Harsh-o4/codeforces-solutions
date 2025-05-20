//32B. Borze

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0; i < s.size(); ){
        if(s[i]=='.'){
            cout<<0;
            ++i;
        }
        else if(s[i]=='-' && i+1<s.size()){
            if(s[i+1]=='.') cout<<1;
            else    cout<<2;

            i +=2;
        }
    }    

    return 0;
}