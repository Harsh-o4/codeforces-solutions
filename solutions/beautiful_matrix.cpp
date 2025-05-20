//263A. Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    int row, column;

    for(int i=0; i < 5; ++i){
        for(int j=0; j < 5; ++j){
            cin>>a[i][j];

            if(a[i][j]==1){
                row = i;
                column = j;
            }
        }
    }

    row = row>2 ? row-2 : 2-row;
    column = column>2 ? column-2 : 2-column;
    
    int moves = row + column;

    cout<<moves<<endl;

    return 0;
}