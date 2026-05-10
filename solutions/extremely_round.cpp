//1766A. Extremely Round

#include<bits/stdc++.h>
using namespace std;

int solve(){
    string n;
    cin >> n;

    int digits = n.size();

    return 9 * (digits - 1) + (n[0] - '0');
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cout << solve() << '\n';
    }
}