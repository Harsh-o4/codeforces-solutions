//139A. Petr and Book

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    int a[7], p[7], curr_sum = 0;

    for(int i = 0; i < 7; ++i){
        cin>>a[i];
        curr_sum += a[i];
        p[i] = curr_sum;
    }

    while(n>p[6]){
        n -= p[6];
    }

    for(int i = 0; i < 7; ++i){
        if(p[i]>=n){
            cout<<i+1<<endl;
            break;
        }
    }


    return 0;
}