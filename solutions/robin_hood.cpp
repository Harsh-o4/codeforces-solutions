//2014B. Robin Hood and the Major Oak

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int itr;
    cin>>itr;
 
    for(int i = 0; i < itr; ++i){
        int n,k;
        cin>>n>>k;
        int dur = k - 1;
 
        long long s = max(1,n - k + 1);
        long long total_leaves = (n + 1) / 2  - s / 2;
        
 
        if ((total_leaves % 2) == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    } 
}