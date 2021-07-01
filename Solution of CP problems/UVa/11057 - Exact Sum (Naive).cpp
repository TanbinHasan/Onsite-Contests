/**
 *    Author  : Tanbin_Hasan
 *    Created : 02.01.2021
**/

#include <bits/stdc++.h>
using namespace std ;

//data types
typedef int_fast64_t ll ;
typedef uint_fast64_t ull ;

//constants
const int md = 1e9 + 7 ;
const long long int inf = 1e18 ;
const double pi = acos((double)-1) ;
const double eps = 1e-9 ;

//pair
#define F first
#define S second
#define mp make_pair

//shortcuts
#define bg(x) (x).begin()
#define en(x) (x).end()
#define ft front()
#define bk back()
#define ins insert
#define pb push_back
#define pf push_front
#define ppb pop_back()
#define ppf pop_front()
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define sz(x) int((x).size())
#define all(x) (x).begin() , (x).end()
#define rall(x) (x).rbegin() , (x).rend()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x) , 0LL)
#define SP(x) cout << fixed << setprecision(x)

//functions


int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;
    ll n ;
    while(cin >> n)
    {
        vector <int> ar(n) ;
        vector <ll> cnt(1000001 , 0) ;
        for(auto &i : ar)
        {
            cin >> i ;
            ++cnt[i] ;
        }
        sort(all(ar)) ;
        int limit ;
        cin >> limit ;
        int l = ceil(limit / 2.0) ;
        int r = limit - l ;
        pair <int , int> ans ;
        while(1)
        {
            if(l == r)
            {
                if(cnt[l] > 1)
                {
                    ans = {l , r} ;
                    break ;
                }
            }
            else
            {
                if(cnt[l] && cnt[r])
                {
                    ans = {min(l , r) , max(l , r)} ;
                    break ;
                }
            }
            --l , ++r ;
        }
        cout << "Peter should buy books whose prices are " << ans.F << " and " << ans.S << ".\n\n" ;
    }
    return 0 ;
}
