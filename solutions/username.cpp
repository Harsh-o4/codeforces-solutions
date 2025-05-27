//155A. I_love_%username%

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int points;
    cin>>points;

    int max = points;
    int min = points;
    int amazing = 0;

    for(int i = 0; i < n-1; ++i){
        cin>>points;
        if(points<min){
            min = points;
            ++amazing;
        } 
        if(points>max){
            max = points;
            ++amazing;
        }  
    }

    cout<<amazing<<endl;

    return 0;
}