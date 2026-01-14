//1862A. Sequence Game

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> b(n);
	for(int i = 0;i < n; ++i)
		cin>>b[i];

	vector<int> a;

	a.push_back(b[0]);
	for(int i = 1; i < n; ++i){
		if(b[i]>=b[i-1])
			a.push_back(b[i]);

		if(b[i]<b[i-1]){
			a.push_back(b[i]);
			a.push_back(b[i]);
		}
	}

	cout<<a.size()<<endl;
	for(auto i: a){
		cout<<i<<" ";
	}

	cout<<endl;
}

int main(){

	int nt;
	cin>>nt;

	while(nt--){
		solve();
	}
}
