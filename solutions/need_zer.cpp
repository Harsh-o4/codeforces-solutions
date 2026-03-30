//1805. We need the Zero

#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n;
	cin>>n;
	
	vector<int> a(n);
	int xorsum = 0;

	for(int i = 0; i < n; ++i){
		cin>>a[i];

		xorsum = xorsum ^ a[i];
	}

	if(n%2==0){
		if(xorsum==0)	return 0;
		else return -1;
	}
	else{
		return xorsum;
	}
}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		cout<<solve()<<endl;
	}
}
