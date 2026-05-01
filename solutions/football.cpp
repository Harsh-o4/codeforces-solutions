//96A. Football

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int trail = 1;
    bool dangerous = false;

    for(int i = 1; i < s.size(); ++i){
        if(s[i]==s[i-1])    ++trail;
        else    trail = 1;

        if(trail==7){
            dangerous = true;
            break;
        }
    }

    if(dangerous)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}