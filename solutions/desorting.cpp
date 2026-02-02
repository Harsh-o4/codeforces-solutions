//1853A. Desorting

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n);
	for(int i = 0; i < n; ++i){
		cin>>a[i];
	}

	int min_diff = 1000000000;
	bool sorted = true;

	for(int i = 1; i < n; ++i){
		if(a[i]-a[i-1] < 0){
			cout<<0<<endl;
			sorted = false;
			break;
		}

		if(a[i]-a[i-1]<min_diff){
			min_diff = a[i]-a[i-1];
		}
	}

	if(sorted){
		cout<<(min_diff/2)+1<<endl;
	}

}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		solve();
	}
}
