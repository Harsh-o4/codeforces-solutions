//129A. Cookies

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    int odd_count = 0;

    for(int i = 0; i < n; ++i){
        cin>>a[i];
        
        if(a[i]%2 != 0) ++odd_count;
    }

    // cout<<odd_count<<endl;

    if(odd_count%2==0)  cout<<n-odd_count<<endl;
    else    cout<<odd_count<<endl;

    return 0;
}