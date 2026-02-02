//1857A. Array Coloring

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n);
	int no_of_odds = 0;
	for(int i = 0; i < n; ++i){
		cin>>a[i];
		if(a[i]%2==1)	++no_of_odds;
	}

	if(no_of_odds%2==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		solve();
	}
}

