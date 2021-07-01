/**
 *    Author  : Ador
 *    Created : 12.08.2020
**/
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cctype>
#define pi acos(-1.0)
#define L 10000050
typedef long long int ll ;
typedef unsigned long long int ull ;
using namespace std ;
ll gcd(ll x , ll y)
{
    if(!y) return x ;
    return gcd(y , x % y) ;
}
int main(void)
{
    //ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
    //freopen("input.txt" , "r" , stdin) ;
    //freopen("output.txt" , "w" , stdout) ;
    ll t ; cin >> t ;
    getchar() ;
    while(t--)
    {
        ll n = 0 , ar[1050] ;
        string x ;
        getline(cin , x) ;
        stringstream ss(x) ;
        while(ss >> ar[n]) ++n ;
        ll i , j , mx = 0 ;
        for(i = 0 ; i < n ; ++i)
            for(j = i + 1 ; j < n ; ++j)
                mx = max(mx , gcd(ar[i] , ar[j])) ;
        cout << mx << "\n" ;
    }
    return 0 ;
}
