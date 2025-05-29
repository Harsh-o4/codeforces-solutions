//133A. HQ9+

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i = 0; i < s.size(); ++i){
        if(s[i]==57 || s[i]==72 || s[i]==81){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}