/**
 *    Author  : Tanbin_Hasan
 *    Created : 01.01.2021
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
#define on(x) check[(x) >> 6] & (1LL << ((x) & 63))
#define set1(x) check[(x) >> 6] |= (1LL << ((x) & 63))
#define tog(x) check[(x) >> 6] ^= (1LL << ((x) & 63))
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout) ;
    #endif
    ll n , cnt = 0 ;
    while(cin >> n && n)
    {
        if(cnt++) cout << '\n' ;
        vector <ll> ar(n) ;
        vector <vector <ll>> v ;
        for(auto &i : ar) cin >> i ;
        for(ll mask = 0 ; mask < (1LL << n) ; ++mask)
        {
            vector <ll> temp ;
            for(ll i = 0 ; i < n ; ++i)
                if(mask & (1LL << i)) temp.pb(ar[i]) ;
            if(temp.size() == 6) v.pb(temp) ;
        }
        sort(v.begin() , v.end()) ;
        ll l = v.size() ;
        cin >> ws ;
        for(ll x = 0 ; x < l ; ++x)
        {
            for(ll i = 0 ; i < 6 ; ++i)
            {
                if(!i) cout << v[x][i] ;
                else cout << ' ' << v[x][i] ;
            }
            cout << '\n' ;
        }
    }
    return 0 ;
}
