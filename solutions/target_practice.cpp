//1873C. Target Practice

#include<bits/stdc++.h>
using namespace std;

void solve(){
	vector<vector<int>> score = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,5,5,4,3,2,1},
		{1,2,3,4,4,4,4,3,2,1},
		{1,2,3,3,3,3,3,3,2,1},
		{1,2,2,2,2,2,2,2,2,1},
		{1,1,1,1,1,1,1,1,1,1}};

	int sum = 0;
	vector<vector<char>> a(10,vector<char>(10));

	for(int i = 0; i < 10; ++i){
		for(int k = 0; k < 10; ++k){
			cin>>a[i][k];
			if(a[i][k] == 'X')
				sum += score[i][k];
		}
	}

	cout<<sum<<endl;
}
int main(){
int nt;
cin>>nt;

while(nt--)
solve();

return 0;
}
