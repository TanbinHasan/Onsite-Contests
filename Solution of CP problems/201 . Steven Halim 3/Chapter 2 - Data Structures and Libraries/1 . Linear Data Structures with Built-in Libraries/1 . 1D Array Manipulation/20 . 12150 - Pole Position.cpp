/**
 *    Author  : Tanbin_Hasan
 *    Created : 11.12.2020
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
    ll n ;
    while(cin >> n && n)
    {
        vector <pair <ll , ll>> v ;
        unordered_set <ll> s ;
        bool ok = true ;
        for(ll i = 0 ; i < n ; ++i)
        {
            ll x , y ; cin >> x >> y ;
            v.pb({i + y , x}) ;
            s.insert(i + y) ;
            if(i + y < 0 || i + y >= n) ok = false ;
        }
        sort(v.begin() , v.end()) ;
        if(s.size() != n) ok = false ;
        if(!ok) cout << -1 ;
        else
        {
            for(ll i = 0 ; i < n ; ++i)
            {
                cout << v[i].S ;
                if(i != n - 1) cout << ' ' ;
            }
        }
        cout << '\n' ;
    }
    return 0 ;
}
