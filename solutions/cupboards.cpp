//248A. Cupboards 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int l,r,lopen=0,ropen=0;
    for(int i = 0; i < n; ++i){
        cin>>l>>r;
        if(l==1)    ++lopen;
        if(r==1)    ++ropen;
    }

    lopen = min(lopen,n-lopen);
    ropen = min(ropen,n-ropen);

    cout<<lopen+ropen<<endl;

    return 0;
}