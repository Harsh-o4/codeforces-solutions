//1845A. Forbidden Integer

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,x;
	cin>>n>>k>>x;
	vector<int> result;


	if(x!=1){
		cout<<"YES"<<endl;
		cout<<n<<endl;
		for(int i = 0; i < n; ++i)	cout<<"1 ";
		cout<<endl;

	}
	else{
		if( n%2==1 || k==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<n/2<<endl;
			if(n%2==1){
			cout<<"3 ";
			n-=3;
			}
			while(n>0){
			cout<<"2 ";
			n-=2;
			}
			cout<<endl;
		}
	}
}
int main(){
	int nt;
	cin>>nt;

	while(nt--)	solve();
}

