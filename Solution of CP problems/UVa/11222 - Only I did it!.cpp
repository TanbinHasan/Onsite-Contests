/**
 *    Author  : Tanbin_Hasan
 *    Created : 13.12.2020
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
void input(vector <ll> &v , unordered_map <ll , ll> &cnt)
{
    ll n ; cin >> n ;
    while(n--)
    {
        ll x ; cin >> x ;
        v.pb(x) ;
        ++cnt[x] ;
    }
}
void output(ll mx , set <ll> &x , ll no)
{
    ll p = x.size() ;
    if(p == mx)
    {
        cout << no << ' ' << p ;
        for(auto &i : x) cout << ' ' << i ;
        cout << '\n' ;
    }
}
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout) ;
    #endif
    ll tc ; cin >> tc ;
    for(ll t = 1 ; t <= tc ; ++t)
    {
        cout << "Case #" << t  << ":\n" ;
        unordered_map <ll , ll> cnt ;
        vector <ll> a , b , c ;
        set <ll> x , y , z ;
        input(a , cnt) ; input(b , cnt) ; input(c , cnt) ;
        for(auto &i : a) if(cnt[i] == 1) x.insert(i) ;
        for(auto &i : b) if(cnt[i] == 1) y.insert(i) ;
        for(auto &i : c) if(cnt[i] == 1) z.insert(i) ;
        ll p = x.size() , q = y.size() , r = z.size() ;
        ll mx = max({p , q , r}) ;
        output(mx , x , 1) ; output(mx , y , 2) ; output(mx , z , 3) ;
    }
    return 0 ;
}
