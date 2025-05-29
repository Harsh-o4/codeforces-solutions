//227B. Effective Approach

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    unordered_map<int,int> front,back;

    for(int i = 0; i < n; ++i){
        cin>>a[i];
        if(front.find(a[i])==front.end()){
            front[a[i]] = i + 1;
        }

        back[a[i]] = n-i;
    }

    long long v_count = 0;
    long long p_count = 0;

    int query_count,query;
    cin>>query_count;

    while(query_count--){
        cin>>query;

        v_count += front[query];
        p_count += back[query];
    }

    cout<<v_count<<" "<<p_count<<endl;

    return 0;
}