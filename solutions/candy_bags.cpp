//334A. Candy Bags

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;

    int s = n*n;
    int a[n][n];

    for(int i = 0; i < n; ++i)  a[i][0] = i+1;

    for(int i = 0; i < n; ++i){
        for(int j = 1; j < n; ++j){
            a[i][j] = a[i][j-1] + n-1;

            if(j == i+1) a[i][j] += n;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}