//80A. Panoramix's Prediction

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<2) return false;
        
        for(int j = 2; j*j<=n; ++j){
            if(n%j==0)
                return false;
        }
        return true;
}

int main(){
    int n, m;
    cin>>n>>m;

    int next = n+1;
    while(!isprime(next)){
        next++;
    }

    if(next==m) cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;

    return 0;
}   