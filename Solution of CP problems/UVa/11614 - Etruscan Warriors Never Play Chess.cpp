/**
 *    Author  : Tanbin_Hasan
 *    Created : 23.11.2020
**/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std ;
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;
double pi = acos(-1.0) ;
double eps = 1e-9 ;
ll L = 31250001 ;
const ll md = 1e9 + 7 ;
#define pb push_back
#define f first
#define s second
#define SP(x) cout << fixed << setprecision(x)
vector <ll> check ;
#define on(x) (check[x >> 6] & (1LL << (x & 63)))
#define set1(x) check[x >> 6] |= (1LL << (x & 63))
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
        ll n ; cin >> n ;
        cout << (ll)(-1 + sqrt(1.0 + 8.0 * n)) / 2 << '\n' ;
    }
    return 0 ;
}
