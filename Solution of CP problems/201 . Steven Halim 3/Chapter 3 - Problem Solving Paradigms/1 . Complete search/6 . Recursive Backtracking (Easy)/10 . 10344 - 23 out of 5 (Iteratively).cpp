/**
 *    Author  : Tanbin_Hasan
 *    Created : 31.12.2020
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
#define F first
#define S second
#define mp make_pair

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
#define SUM(x) accumulate(all(x) , 0LL)
#define des greater <ll> ()
#define SP(x) cout << fixed << setprecision(x)

//bitwise operations
bool on(ll x , vector<ll> &ar) {return ar[(x) >> 6] & (1LL << ((x) & 63)) ; }
void set1(ll x , vector<ll> &ar) {ar[(x) >> 6] |= (1LL << ((x) & 63)) ; }
void tog(ll x , vector<ll> &ar) {ar[(x) >> 6] ^= (1LL << ((x) & 63)) ; }

//functions
void check(ll &sum , char ch , ll n)
{
    if(ch == '+') sum += n ;
    if(ch == '*') sum *= n ;
    if(ch == '-') sum -= n ;
}

int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    while(1)
    {
        up :
        vector <ll> ar(5) , sex = {0 , 1 , 2 , 3 , 4} ;
        for(auto &i : ar) cin >> i ;
        if(!SUM(ar)) break ;
        string s = "+-*" ;
        do{
            for(ll a = 0 ; a < 3 ; ++a)
            for(ll b = 0 ; b < 3 ; ++b)
            for(ll c = 0 ; c < 3 ; ++c)
            for(ll d = 0 ; d < 3 ; ++d)
            {
                ll sum = ar[sex[0]] ;
                check(sum , s[a] , ar[sex[1]]) ;
                check(sum , s[b] , ar[sex[2]]) ;
                check(sum , s[c] , ar[sex[3]]) ;
                check(sum , s[d] , ar[sex[4]]) ;
                if(sum == 23)
                {
                    cout << "Possible\n" ;
                    goto up ;
                }
            }
        }while(next_permutation(all(sex))) ;
        cout << "Impossible\n" ;
    }
    return 0 ;
}
