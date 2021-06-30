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
    ll n , x , y = 0 ;
    while(cin >> n)
    {
        unordered_set <ll> s ;
        for(ll i = 0 ; i < n ; ++i)
        {
            cin >> x ;
            if(i) s.insert(llabs(x - y)) ;
            y = x ;
        }
        ll sum = 0 ;
        for(auto &i : s) sum += i ;
        --n ;
        if(sum == (n * (n + 1))/2) cout << "Jolly\n" ;
        else cout << "Not jolly\n" ;
    }
    return 0 ;
}
