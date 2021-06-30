/**
 *    Author  : Tanbin_Hasan
 *    Created : 01.01.2021
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
bool ok = false ;
bool possible(int total , vector <int> &ar , int pos)
{
    if(pos == 5)
        return total == 23 ;
    int n = ar[pos] ;
    return possible(total + n , ar , pos + 1)
        || possible(total - n , ar , pos + 1)
        || possible(total * n , ar , pos + 1) ;
}

vector <bool> used(6 , false) ;
void permutaion(vector <int> ar , vector <int> &temp)
{
    if(ok) return ;
    if(sz(temp) == 5)
    {
        if(possible(temp.ft , temp , 1)) ok = true ;
        return ;
    }
    for(int i = 0 ; i < 5 ; ++i)
    {
        if(used[i]) continue ;
        temp.pb(ar[i]) ;
        used[i] = true ;
        permutaion(ar , temp) ;
        temp.ppb ;
        used[i] = false ;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;
    while(1)
    {
        ok = false ;
        vector <int> ar(5) , temp ;
        for(auto &i : ar) cin >> i ;
        if(!SUM(ar)) break ;
        permutaion(ar , temp) ;
        if(ok) cout << "Possible\n" ;
        else cout << "Impossible\n" ;
    }
    return 0 ;
}
