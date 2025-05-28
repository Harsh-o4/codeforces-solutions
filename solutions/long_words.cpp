//71A. Way Too Long Words

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string s;
    
    for(int i = 0; i < n; ++i){
        cin>>s;

        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s.back();
        }
        else
            cout<<s;
        cout<<endl;
    }

    return 0;
}