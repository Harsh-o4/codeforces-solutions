//1789A. Serval and Mocha's Array

#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin>>a[i];
    }

    bool flag = false;

    for(int i = 0; i < n; ++i){
        for(int j = i+1; j<n; ++j ){
            if(__gcd(a[i],a[j])<=2){
                flag = true;
            }
        }
    }
    
    return flag;        
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        if(solve())
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}