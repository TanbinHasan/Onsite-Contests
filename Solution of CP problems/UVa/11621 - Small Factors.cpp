/**
 *    Author  : Tanbin_Hasan
 *    Created : 03.01.2021
**/

#include <bits/stdc++.h>

using namespace std ;

typedef int_fast64_t ll ;

vector <ll> gen_num(void)
{
    set <ll> num ;
    vector <ll> ar ;
    for(double i = 0 ; i < 33 ; ++i)
    {
        for(double j = 0 ; j < 18 ; ++j)
        {
            ll temp = pow(2 , i) * pow(3 , j) ;
            num.insert(temp) ;
        }
    }
    for(auto &i : num) ar.push_back(i) ;
    return ar ;
}

int main(void)
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    auto num = gen_num() ;
    ll n ;
    while(cin >> n && n)
    {
        cout << *lower_bound(num.begin() , num.end() , n) << '\n' ;
    }
    return 0 ;
}