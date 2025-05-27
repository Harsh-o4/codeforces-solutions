//200B. Drinks

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    float res = 0;

    for(int i=0; i < n; ++i){
        cin>>a[i];
        res += a[i];
    }

    res /= n;
    
    cout<<res<<endl;

    return 0;
}