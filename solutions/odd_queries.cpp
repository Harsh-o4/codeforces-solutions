//1807D. Odd Queries

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;

    vector<int> a(n);
    long long sum = 0;
    vector<long long> pref(n+1,0);

    for(int i = 0; i < n; ++i){
        cin>>a[i];

        sum += a[i];

        pref[i+1] = pref[i] + a[i];
    }

    for(int k = 0; k < q; ++k){
        int l,r,x;
        cin>>l>>r>>x;
        l--;r--;

        long long rangeSum = pref[r+1] - pref[l];
        long long len = r-l+1;

        long long newsum = sum - rangeSum + (len * x);

        if(newsum%2==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }
}