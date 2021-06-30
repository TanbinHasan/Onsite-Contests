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
    SP(2) ;
    ll t ; cin >> t ;
    while(t--)
    {
        ll n ; cin >> n ;
        vector <ll> values(255 , 0) ;
        while(n--)
        {
            unsigned char ch ;
            double x ;
            cin >> ch >> x ;
            values[ch] = x ;
        }
        double ans = 0 ;
        ll m ; cin >> m ;
        cin >> ws ; // Alternative but not better , cin.ignore() ;
        while(m--)
        {
            string s ;
            getline(cin , s) ;
            for(auto &i : s) ans += values[i] ;
        }
        cout << (ans / 100) << '$' << '\n' ;
    }
    return 0 ;
}
