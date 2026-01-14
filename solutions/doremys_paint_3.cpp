//1890A. Doremy's Paint 3

#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    unordered_map<int,int> freq;
    int maxf = 0;

    for(int i = 0; i<n ;++i){
        cin>>a[i];
        ++freq[a[i]];

        if(freq[a[i]]>maxf){
            maxf = freq[a[i]];
        }
    }

    if(n==2) return true;

    if(freq.size()>=3)  return false;

    int minf = n;

    for(auto i = freq.begin(); i!=freq.end(); ++i){
        if(i->second<minf){
            minf = i->second;
        }
    }

    if(abs(minf-maxf)<=1) return true;
     
    return false;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        bool ispossible = solve();

        if(ispossible)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}