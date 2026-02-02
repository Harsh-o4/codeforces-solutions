//1858A. Buttons

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;

	if(a>b)	cout<<"First"<<endl;
	else if(b>a)	cout<<"Second"<<endl;
	else if(c%2 == 1) cout<<"First"<<endl;
	else cout<<"Second"<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		solve();
	}
}
