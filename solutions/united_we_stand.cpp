//1859A. United We Stand

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<long long> a(n);
	long long max = 0;
	for(int i = 0; i < n; ++i){
		cin>>a[i];
		if(a[i]>max) max = a[i];
	}

	vector<long long> b;
	vector<long long> c;
	for(int i = 0; i < n; ++i){
		if(a[i]==max) c.push_back(a[i]);
		else	b.push_back(a[i]);
	}

	if(b.size() != 0){
		cout<<b.size()<<" "<<c.size()<<endl;
		for(int i = 0; i < b.size(); ++i)	cout<<b[i]<<" ";
		cout<<endl;
		for(int i = 0; i < c.size(); ++i)	cout<<c[i]<<" ";
		cout<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}

int main(){
	int nt;
	cin>>nt;

	while(nt--)
		solve();

}
