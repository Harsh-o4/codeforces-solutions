//228A. Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int repetition = 0;
    if(a==b || a==c || a==d)    ++repetition;
    if(b==c || b==d)    ++repetition;
    if(c==d)    ++repetition;

    cout<<repetition<<endl;
    return 0;
}