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
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ; cout.tie(nullptr) ;
    #ifdef FILE_IO
    #define FILE_IO
    freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout) ;
    #endif
    vector <ll> cnt(91 , 0) ;
    string s[6] = {"BFPV" , "CGJKQSXZ" , "DT" , "L" , "MN" , "R" } ;
    for(ll n = 1 ; n <= 6 ; ++n)
        for(auto &i : s[n - 1]) cnt[i] = n ;
    string str ;
    while(cin >> str)
    {
        if(cnt[str[0]]) cout << cnt[str[0]] ;
        ll l = str.size() ;
        for(ll i = 1 ; i < l ; ++i)
            if(cnt[str[i]] != cnt[str[i - 1]] && cnt[str[i]]) cout << cnt[str[i]] ;
        cout << '\n' ;
    }
    return 0 ;
}
