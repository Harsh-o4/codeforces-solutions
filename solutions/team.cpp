//231A. Team

#include <bits/stdc++.h>
using namespace std;

int main(){
    int nt;
    cin>>nt;

    int ques = 0;
    int a,b,c;

    while(nt--){
        cin>>a>>b>>c;
        
        int sure = 0;

        if(a==1)    ++sure;
        if(b==1)    ++sure;
        if(c==1)    ++sure;

        if(sure>=2) ++ques;
    }

    cout<<ques<<endl;
    
    return 0;
}