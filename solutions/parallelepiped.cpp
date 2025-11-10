//224A. Parallelepiped

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;

    int e1,e2,e3;

    e1 = sqrt(a1*a2/a3);
    e2 = sqrt(a2*a3/a1);
    e3 = sqrt(a3*a1/a2);

    // cout<<e1<<" "<<e2<<" "<<e3<<endl;

    cout<<4*(e1+e2+e3)<<endl;

    return 0;
}