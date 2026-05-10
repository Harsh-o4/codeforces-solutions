//1777A. Everybody Likes Good Arrays

#include<bits/stdc++.h>
using namespace std;

long long solve(){
    long long n;
    cin>>n;

    vector<long long> a(n);
    for(long long i = 0; i < n; ++i){
        cin>>a[i];
        a[i] %= 2;
    }

    long long ops = 0, trail=1;

    for(long long i = 1; i < n; ++i){
        if(a[i]==a[i-1]){
            ++trail;
        }
        else{
            ops += trail-1;
            trail = 1;
        }
    }

    ops += trail-1;

    return ops;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        cout<<solve()<<endl;
    }
}