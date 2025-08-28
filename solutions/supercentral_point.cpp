//165A. Supercentral Point

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nt; cin>>nt;

    vector<vector<int>> a(nt,vector<int>(2));
    for(int i = 0; i < nt; ++i){
        cin>>a[i][0]>>a[i][1];
    }

    int sups = 0;
    for(int i = 0; i < nt; ++i){
        bool up = false;
        bool down = false;
        bool right = false;
        bool left = false;

        for(int j = 0; j < nt; ++j){
            if(a[j][0]>a[i][0] && a[j][1]==a[i][1])
                right = true;
            if(a[j][0]<a[i][0] && a[j][1]==a[i][1])
                left = true;
            if(a[j][0]==a[i][0] && a[j][1]>a[i][1])
                up = true;
            if(a[j][0]==a[i][0] && a[j][1]<a[i][1])
                down = true;

            if(up && down && right && left){
                ++sups;
                break;
            }
        }
    }

    cout<<sups<<endl;
    
    return 0;
}