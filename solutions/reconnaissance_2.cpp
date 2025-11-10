//34A. Reconnaissance 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;

    vector<int> s(n);
    for(int i = 0; i < n; ++i)
        cin>>s[i]; 

    vector<int> closest(2);
    int rUnit = abs(s[0]-s[n-1]);
    closest[0] = 1;
    closest[1] = n;

    for(int i = 0; i < n-1; ++i){
        int dis = abs(s[i]-s[i+1]);

        if(dis<rUnit){
            rUnit = dis;
            closest[0] = i+1;
            closest[1] = i+2;
        }
    }

    cout<<closest[0]<<" "<<closest[1]<<endl;

    return 0;
}