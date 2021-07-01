/**
 *    Author  : Tanbin_Hasan
 *    Created : 21.12.2020
**/
#include <bits/stdc++.h>
using namespace std ;
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;
double pi = acos(-1.0) ;
double eps = 1e-9 ;
ll L = 31250001 ;
const ll md = 1e9 + 7 ;
#define pb push_back
#define F first
#define S second
#define SP(x) cout << fixed << setprecision(x)
vector <ll> check , prime ;
#define on(x) (check[(x) >> 6] & (1LL << ((x) & 63)))
#define set1(x) (check[(x) >> 6] |= (1LL << ((x) & 63)))
#define tog(x) (check[(x) >> 6] ^= (1LL << ((x) & 63)))
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout) ;
    #endif
    ll t ; cin >> t ;
    while(t--)
    {
        ll len ; cin >> len ;
        ll n ; cin >> n ;
        vector <ll> ar(n) ;
        for(auto &i : ar) cin >> i ;
        bool ok = false ;
        for(ll mask = 0 ; mask < (1LL << n) ; ++mask)
        {
            ll sum = 0 ;
            for(ll i = 0 ; i < n ; ++i)
                if(mask & (1LL << i)) sum += ar[i] ;
            if(sum == len)
            {
                cout << "YES\n" ;
                ok = true ;
                break ;
            }
        }
        if(!ok) cout << "NO\n" ;
    }
    return 0 ;
}
