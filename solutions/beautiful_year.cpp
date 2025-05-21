//271A. Beautiful Year

#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(int year){
    int d1 = (year/1000);
    int d2 = (year/100)%10;
    int d3 = (year/10)%10;
    int d4 = year%10;

    return d1!=d2 && d1!=d3 && d1!=d4 &&
            d2!=d3 && d2!=d4 && d3!=d4;
}

int main(){
    int year;
    cin>>year;

    ++year;
    while(is_beautiful(year)==false) ++year;

    cout<<year;

    return 0;
}