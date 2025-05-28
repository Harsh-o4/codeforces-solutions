//339A. Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i = 0; i<s.size(); i+=2){
        for(int k = i+2; k<s.size(); k+=2){
            if(s[i]>s[k]){
                swap(s[i],s[k]);
            }
        }
    }

    cout<<s<<endl;
    return 0;
}