//272A. Dima and Friends

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin>>a[i];
        sum += a[i];
    }

    int possible = 0;
    for(int i = 1; i <= 5; ++i){
        if((sum+i)%(n+1)!=1)  ++possible;
    }

    cout<<possible<<endl;

    return 0;
}