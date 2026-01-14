//1877A. Goals of Victory


#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n-1);
	int sum = 0;

	for(int i = 0; i<n-1; ++i){
		cin>>a[i];
		sum += a[i];
	}

	cout<<-1*sum<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--)
		solve();

	return 0;
}
