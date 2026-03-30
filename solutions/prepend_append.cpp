//1791C. Prepend and Append

#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n;
	cin>>n;

	string s;
	cin>>s;

	int i = 0;
	int j = s.size() - 1;

	int added = 0;

	while(i<j){
		if(s[i]!=s[j]){
			added += 2;
			++i;
			--j;
		}
		else break;
	}

	return s.size()-added;
}

int main(){
	int nt;
	cin>>nt;

	while(nt--){
		cout<<solve()<<endl;
	}
}
