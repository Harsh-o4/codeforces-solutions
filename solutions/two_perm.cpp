//1761A. Two Permutations

#include<bits/stdc++.h>
using namespace std;

bool solve(){
    long long n,a,b;
    cin>>n>>a>>b;

    if(a+b+2 <= n || (a==n && b==n))   return true;
    else return false;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        if(solve())
            cout<<"YES \n";
        else  
            cout<<"NO \n";
    }
}