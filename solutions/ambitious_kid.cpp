//1866A. Ambitiuous Kid

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int min_dev = 100000 ;
	int curr;

	for(int i=0; i < n; ++i){
		cin>>curr;

		int cur_min = abs(0-curr);

		if(cur_min<min_dev)
			min_dev = cur_min;
	}

	cout<<min_dev<<endl;
}
