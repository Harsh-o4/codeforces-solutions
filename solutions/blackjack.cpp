//104A. Blackjack

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    n -= 10;

    if(n==10)   cout<<15<<endl;
    else if(n>0 && n<=11)   cout<<4<<endl;
    else cout<<0<<endl;
    
    return 0;
}