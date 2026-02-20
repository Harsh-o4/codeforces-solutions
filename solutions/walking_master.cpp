//1806A. Walking Master

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int sx,sy,dx,dy;
    cin>>sx>>sy>>dx>>dy;

    if(dy<sy){
        cout<<-1<<endl;
        return;
    }

    int steps = dy-sy;
    sx += steps;

    if(sx<dx){
        cout<<-1<<endl;
        return;
    }

    steps += sx-dx;

    cout<<steps<<endl;

}

int main(){
    int nt;
    cin>>nt;

    while(nt--){
        solve();
    }
}