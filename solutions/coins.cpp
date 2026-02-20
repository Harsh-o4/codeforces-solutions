//1814A. Coins

#include<bits/stdc++.h>
using namespace std;

bool solve(long long  n,long long k){
	if(n%2==0 || ( k%2==1 && k<=n))	return true;

	return false;
}

int main(){
	int nt;
	cin>>nt;

	long long n,k;

	while(nt--){
		cin>>n>>k;

		if(solve(n,k))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}
