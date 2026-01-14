//1899. Game with Integers

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num;
    cin>>num;

    if(num%3 == 0)  cout<<"Second"<<endl;
    else    cout<<"First"<<endl;
}

int main(){
    int n;
    cin>>n;

    while(n--)  solve();


    return 0;

}