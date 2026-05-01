//1788A. One and Two

#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    int count=0;
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        if(a[i]==2){
            count++;
        }
    }

    // cout<<"count "<<count<<endl;

    if(count==0) return 1;

    if(count%2==1)  return -1;

    int target = count/2;
    int visited = 0;

    for(int i = 0; i < n; ++i){
        if(a[i]==2){
            ++visited;
        }

        if(visited==target){
            return i+1;
        }
    }    

    return 0;
}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        cout<<solve()<<endl;
    }
}