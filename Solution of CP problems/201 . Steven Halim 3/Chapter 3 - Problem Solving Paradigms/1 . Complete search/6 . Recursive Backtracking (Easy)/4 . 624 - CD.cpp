/**
 *    Author  : Tanbin_Hasan
 *    Created : 28.12.2020
**/

#include <bits/stdc++.h>
using namespace std ;

//data types
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;
typedef double db ;
typedef long double ldb ;

//constants
ldb pi = acos(-1.0) ;
db eps = 1e-9 ;
ll L = 31250001 ;
const ll md = 1e9 + 7 ;

//pair
#define f first
#define s second
#define mp make_pair
typedef pair <ll , ll> pll ;
typedef pair <db , db> pdd ;

//vector
#define V vector
typedef vector <ll> vl ;
typedef vector <db> vd ;
typedef vector <char> vc ;
typedef vector <string> vs ;
typedef vector <bool> vb ;

//shortcuts
#define bg(x) (x).begin()
#define en(x) (x).end()
#define ft front()
#define bk back()
#define in insert
#define pb push_back
#define pf push_front
#define ppb pop_back()
#define ppf pop_front()
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define sz(x) ll((x).size())
#define all(x) (x).begin() , (x).end()
#define rall(x) (x).rbegin() , (x).rend()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x) , 0)
#define des greater <ll> ()
#define SP(x) cout << fixed << setprecision(x)

//loops
#define FOR(i , a , b) for(auto i = (a) ; i < (b) ; ++i)
#define ROF(i , b , a) for(auto i = (b) - 1 ; i >= (a) ; --i)
#define trav(a , x) for(auto &a : x)

//bitwise operations
bool on(ll x , vl &ar) {return ar[(x) >> 6] & (1LL << ((x) & 63)) ; }
void set1(ll x , vl &ar) {ar[(x) >> 6] |= (1LL << ((x) & 63)) ; }
void tog(ll x , vl &ar) {ar[(x) >> 6] ^= (1LL << ((x) & 63)) ; }

//input-output
vector <ll> in_vec(ll n)
{
    vector <ll> ar(n) ;
    for(auto &i : ar) cin >> i ;
    return ar ;
}
void print_uva(vector <ll> &ar)
{
    ll l = ar.size() ;
    cout << ar[0] ;
    for(ll i = 1 ; i < l ; ++i)
        cout << ' ' << ar[i] ;
}

//functions


int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    ll time , n ;
    while(cin >> time)
    {
        cin >> n ;
        auto ar = in_vec(n) ;
        vl val ;
        ll mx = 0 ;
        FOR(mask , 0 , (1LL << n))
        {
            vl v ;
            ll sum = 0 ;
            FOR(i , 0 , n)
                if(mask & (1LL << i)) sum += ar[i] , v.pb(ar[i]) ;
            if(sum > mx && sum <= time)
            {
                mx = sum ;
                val = v ;
            }
        }
        print_uva(val) ;
        cout << ' ' << "sum:" << mx << '\n' ;
    }
    return 0 ;
}
