//141A. Amusing Joke

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,b;
    cin>>s1;
    cin>>s2;
    cin>>b;

    if(s1.size()+s2.size()!=b.size()){
        cout<<"NO"<<endl;
        return 0;
    }

    string s = s1 + s2;
    
    for(int i = 0; i < s.size(); ++i){
        for(int j = 0; j < s.size(); ++j){
            if(s[i]==b[j]){
                s[i]='0';
                b[j]='0';
                break;
            }
        }
    }

    for(int i = 0; i < s.size(); ++i){
        if(s[i]!='0'){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}