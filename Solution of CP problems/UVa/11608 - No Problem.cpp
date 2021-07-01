/**
 *    Author  : Tanbin_Hasan
 *    Created : 10.12.2020
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
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout) ;
    #endif
    ll cur , cnt = 0 ;
    while(cin >> cur && cur > -1)
    {
        cout << "Case " << ++cnt << ":\n" ;
        vector <ll> a(12) , b(12) ;
        for(auto &i : a) cin >> i ;
        for(auto &i : b) cin >> i ;
        for(ll i = 0 ; i < 12 ; ++i)
        {
            if(cur >= b[i])
            {
                cout << "No problem! :D\n" ;
                cur -= b[i] ;
            }
            else cout << "No problem. :(\n" ;
            cur += a[i] ;
        }
    }
    return 0 ;
}
