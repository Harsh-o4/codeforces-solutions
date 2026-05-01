// 2137B. Fun Permutation

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> res;

    for(int i = 0; i < n; ++i){
        res.push_back(n+1-a[i]);
    }

    for(int i = 0; i < n; ++i){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int nt;
    cin >> nt;

    while (nt--)
    {
        solve();
    }
}