//116A. Tram


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int exit,enter;
    int current = 0;
    int max = 0;

    for(int i=0; i<n; ++i){
        cin>>exit>>enter;
        current -= exit;
        current += enter;

        if(current>max){
            max=current;
        }
    }

    cout<<max<<endl;
    return 0;
}