//1834A. Unit Array

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	int curr;
	int pos = 0;
	int neg = 0;

	for(int i = 0; i < n; ++i){
		cin>>curr;

		if(curr == -1)	++neg;
		if(curr == 1) 	++pos;
	}

	int ops = 0;

	while(pos<neg){
		++pos;
		--neg;

		++ops;
	}

	if(neg%2 == 0)
		cout<<ops<<endl;
	else
		cout<<ops+1<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--)
		solve();

}
