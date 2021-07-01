/**
 *    Author  : Tanbin_Hasan
 *    Created : 07.09.2020
**/
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdint>
#define PI acos(-1.0)
#define L 31250000
#define SP(x) cout << fixed << setprecision(x)
//#define FILE_IO
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;
using namespace std ;
ll NOD(ll n)
{
    ll l = ceil(sqrt(n)) ;
    ll check[l >> 6] ;
    memset(check , 0 , sizeof(check)) ;
    check[0] |= (1LL << 0) , check[0] |= (1LL << 1) ;
    for(ll i = 2 ; i <= l ; i += 2) check[i >> 6] |= (1LL << (i & 63)) ;
    for(ll i = 3 ; i * i <= l ; i += 2)
        if(!(check[i >> 6] & (1LL << (i & 63))))
            for(ll j = i * i ; j <= l ; j += 2 * i) check[j >> 6] |= (1LL << (j & 63)) ;
    ll prime[l] , c = 0 ;
    prime[c++] = 2 ;
    for(ll i = 3 ; i <= l ; i += 2)
        if(!(check[i >> 6] & (1LL << (i & 63)))) prime[c++] = i ;
    ll res = 1 ;
    for(ll i = 0 ; prime[i] * prime[i] <= n ; ++i)
    {
        ll cnt = 1 ;
        while(!(n % prime[i]))
        {
            ++cnt ;
            n /= prime[i] ;
        }
        res *= cnt ;
    }
    if(n != 1) res *= 2 ;
    return res ;
}
ll gcd(ll x , ll y)
{
    if(!y) return x ;
    return gcd(y , x % y) ;
}
ll lcm(ll x , ll y)
{
    return (x * y) / gcd(x , y) ;
}
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
    #ifdef FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    ll n ;
    while(cin >> n and n)
    {
        ll ans = NOD(n) , i ;
        cout << n << " " ;
        ll factors[2000] , c = 0 ;
        for(i = 2 ; i * i <= n ; ++i)
        {
            if(!(n % i))
            {
                factors[c++] = i ;
                if(i * i != n) factors[c++] = (n / i) ;
            }
        }
        sort(factors , factors + c) ;
        for(i = 0 ; i < c ; ++i)
            for(ll j = i + 1 ; j < c ; ++j)
                if(lcm(factors[i] , factors[j]) == n) ++ans ;
        cout << ans << "\n" ;
    }
    return 0 ;
}
