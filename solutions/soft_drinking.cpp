//151A. Soft Drinking

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    k *= l; k /= nl;
    c *= d;
    p /= np;

    int result = min(k,c) ;
    result = min(result,p) ;
    result /= n;
    
    cout<<result<<endl;

    return 0;
}