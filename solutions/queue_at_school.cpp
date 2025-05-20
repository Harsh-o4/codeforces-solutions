//266B.Queue at the School

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    string s;
    cin>>s;

    
    while(t--){
        string copy = s;
        for(int i = 0; i < n-1; ++i){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);                
                ++i; //to avoid double swap
            }
        }
        if(copy==s) break; //terminate if no swaps 
    }

    cout<<s<<endl;

    return 0;
}