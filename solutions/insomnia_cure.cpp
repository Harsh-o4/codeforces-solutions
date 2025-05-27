//148A. Insomnia Cure

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int dragons = 0;
    if(k==1 || l==1 || m==1 || n==1){
            dragons = d;
            cout<<d<<endl;
            return 0;
    }
    for(int i = 1; i <= d; ++i){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)    ++dragons;
    }

    cout<<dragons<<endl;

    return 0;
}