//1878A. How Much Does Daytona Cost?

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
	bool is_k_present = false;
	for(int i = 0; i<n; ++i){
		cin>>a[i];
		if(a[i]==k)	is_k_present = true;
	}

	if(is_k_present)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}
int main(){
    int nt;
    cin >> nt;

    while (nt--)
        solve();
    return 0;
}
