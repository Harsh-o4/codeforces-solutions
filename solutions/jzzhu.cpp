//450A. Jzzhu and Children

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> a(n), rep(n);
    int max = rep[0], max_i = 0;

    for(int i = 0; i < n; ++i){
        cin>>a[i];

        rep[i] = (a[i]+m-1)/m;

        if(rep[i]>=max){
            max = rep[i];
            max_i = i;
        }
    }

    cout<<max_i+1<<endl;

    return 0;
}