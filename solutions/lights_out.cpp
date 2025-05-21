//275A. Lights Out

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> lights(3,vector<int>(3,1));
    vector<vector<int>> a(3,vector<int>(3));

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cin>>a[i][j];

            if(a[i][j]%2==1){
                lights[i][j] ^= 1;

                if(i>0){
                    lights[i-1][j] ^= 1;
                } 
                
                if(j>0){
                    lights[i][j-1] ^= 1;
                }
                
                if(i<2){
                    lights[i+1][j] ^= 1;
                }
                
                if(j<2){
                    lights[i][j+1] ^= 1;
                }
            }
        }
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cout<<lights[i][j];
        }
        cout<<endl;
    }

    return 0;
}