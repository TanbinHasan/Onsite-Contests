/**
 *    Author  : Tanbin_Hasan
 *    Created : 10.10.2020
**/
#include <iostream>
#include <vector>
using namespace std ;
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;
//#define FILE_IO
#define PI acos(-1.0)
#define L 31250002
#define eps 1e-9
#define pb push_back
#define SP(x) cout << fixed << setprecision(x)
vector <ll> check ;
#define on(x) (check[x >> 6] & (1LL << (x & 63)))
#define set1(x) check[x >> 6] |= (1LL << (x & 63))
vector <ll> prime ;
ll euler_totient(ll n)
{
    ll coprime = ((n != 1) ? n : 0) ;
    for(auto &i : prime)
    {
        if(i * i > n) {break ; }
        if(!(n % i))
        {
            while(!(n % i)) {n /= i ; }
            coprime -= (coprime / i) ;
        }
    }
    if(n > 1) {coprime -= (coprime / n) ; }
    return coprime ;
}
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    for(ll i = 0 ; i <= 495 ; ++i) {check.pb(0) ; }
    set1(0) ; set1(1) ; prime.pb(2) ;
    for(ll i = 4 ; i <= 31623 ; i += 2) {set1(i) ; }
    for(ll i = 3 ; i * i <= 31623 ; i += 2)
    {
        if(!on(i))
        {
            for(ll j = i * i ; j <= 31623 ; j += 2 * i) {set1(j) ; }
        }
    }
    for(ll i = 3 ; i <= 31623 ; i += 2) {if(!on(i)) {prime.pb(i) ; } }
    ll n ;
    while(cin >> n && n)
    {
        cout << euler_totient(n) << '\n' ;
    }
    return 0 ;
}
