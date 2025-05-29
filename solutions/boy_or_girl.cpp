//236A. Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int distinct = 0;

    for(int i = 0; i < s.size(); ++i){
        bool repeat = false;
        for(int j = i + 1; j < s.size(); ++j){
            if(s[i]==s[j]){
                repeat = true;
                break;
            }
        }

        if(repeat==false)   ++distinct;
    }

    // cout<<distinct<<endl;

    if(distinct%2==0)   cout<<"CHAT WITH HER!"<<endl;
    else    cout<<"IGNORE HIM!"<<endl;

    return 0;
}