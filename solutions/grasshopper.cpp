//1837A. Grasshopper on a Line

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,k;
	cin>>x>>k;

	if(x%k!=0){
		cout<<1<<endl<<x<<endl;
	}
	else{
		cout<<2<<endl<<x-1<<" "<<1<<endl;
	}
}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		solve();
	}
}
