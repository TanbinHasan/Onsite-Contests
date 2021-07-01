/**
 *    Author  : Tanbin_Hasan
 *    Created : 15.10.2020
**/
#include <iostream>
#include <vector>
#include <cmath>
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
vector <ll> nod , sod ;
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    for(ll i = 0 ; i <= 18 ; ++i) check.pb(0) ;
    set1(0) ; set1(1) ; prime.pb(2) ;
    for(ll i = 4 ; i <= 317 ; i += 2) set1(i) ;
    for(ll i = 3 ; i * i <= 317 ; i += 2)
        if(!on(i)) for(ll j = i * i ; j <= 317 ; j += 2 * i) set1(j) ;
    for(ll i = 3 ; i <= 317 ; i += 2) if(!on(i)) prime.pb(i) ;
    for(ll x = 0 ; x <= 1e5 ; ++x)
    {
        ll n = x , res = 1 , res2 = 1 ;
        for(auto &i : prime)
        {
            if(i * i > n) break ;
            ll cnt = 1 , p = 1 , sum = 1 ;
            while(!(n % i))
            {
                ++cnt ;
                n /= i ;
                p *= i ;
                sum += p ;
            }
            res *= cnt ;
            res2 *= sum ;
        }
        if(n != 1) {res *= 2 ; res2 *= (1 + n) ; }
        nod.pb(res) ;
        sod.pb(res2) ;
    }
    ll t ; cin >> t ;
    while(t--)
    {
        ll a , b , k , sum1 = 0 , sum2 = 0 ; cin >> a >> b >> k ;
        ll temp = k ;
        if(k < a) temp = ceil((double)a / k) * k ;
        for(ll i = temp ; i <= b ; i += k)
        {
            sum1 += nod[i] ;
            sum2 += sod[i] ;
        }
        cout << sum1 << ' ' << sum2 << '\n' ;
    }
    return 0 ;
}