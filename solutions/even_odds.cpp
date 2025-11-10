//318A. Even Odds

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;
    cin>>n>>x;

    if(x <= n-(n/2)){
        cout<<2*(x-1)+1<<endl;
    }
    else{
        x -= n-(n/2);
        cout<<2*(x)<<endl;
    }

    return 0;
}