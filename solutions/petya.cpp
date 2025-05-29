//112A. Petya and Strings

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    
    for(int i=0; i<s.size(); ++i){
        if(tolower(s[i])>tolower(t[i])){
            cout<<1<<endl;
            return 0;
        } 
        if(tolower(s[i])<tolower(t[i])){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<0<<endl;
    return 0;
}