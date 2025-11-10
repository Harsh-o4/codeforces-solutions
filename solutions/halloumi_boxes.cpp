//1903A. Halloumi Boxes

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    bool isSorted = true;

    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        if(i>0 && a[i]<a[i-1]){
            isSorted = false;
        }
    }

    if(k==1 && isSorted==false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }

    return 0;
}