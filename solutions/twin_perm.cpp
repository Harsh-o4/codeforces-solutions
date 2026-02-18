//1831A. Twin Permutations

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; ++i){
		cin>>a[i];
		b[i] = n + 1 - a[i];
	}

	for(int i = 0; i < n; ++i)
		cout<<b[i]<<" ";
	
	cout<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--)
		solve();
}
