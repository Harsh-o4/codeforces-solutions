//1829A. Blank Space

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> a(n);

	int curr = 0;
	int max = 0;

	for(int i = 0; i < n; ++i){
		cin>>a[i];


		if(a[i]==0){
			if(i==0){
				curr = 1;
			}
			else if(i>0 && a[i-1]!=0){
				curr = 1;
			}
			else if(i>0 && a[i-1]==0){
				++curr;
			}

			if(curr>max){
				max = curr;
			}
		}
	}

	cout<<max<<endl;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--)
		solve();
}
