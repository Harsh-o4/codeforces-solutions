//144A. Arrival of the General

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int max=-1,max_i=-1,min=101,min_i=101;

    for(int i=0; i < n; ++i){
        cin>>a[i];

        if(a[i]>max){
            max=a[i];
            max_i=i;
        }
        if(a[i]<=min){
            min=a[i];
            min_i=i;
        }
    }

    // cout<<"max "<<max<<" at "<<max_i<<endl;
    // cout<<"min "<<min<<" at "<<min_i<<endl;

    int swaps = (max_i-0) + (n-1-min_i);
    if(max_i>min_i) swaps--;

    cout<<swaps<<endl;
    
    return 0;
}