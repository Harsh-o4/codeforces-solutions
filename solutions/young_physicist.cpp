//69A. Young Physicist

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> result(3,0);
    vector<int> curr(3);
    int nt;

    cin>>nt;

    while(nt--){
        for(int i = 0; i < 3; ++i){
            cin>>curr[i];
            result[i]+=curr[i];
        }
    }

    bool equilibrium = true;

    for(int i = 0; i < 3; ++i){
        if(result[i]!=0){
            equilibrium=false;
            cout<<"NO";
            break;
        }
    }

    if(equilibrium)
        cout<<"YES";

    return 0;
}