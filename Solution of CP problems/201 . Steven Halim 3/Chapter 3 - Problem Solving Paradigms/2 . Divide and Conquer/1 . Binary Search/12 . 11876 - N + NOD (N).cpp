/**
 *    Author  : Tanbin_Hasan
 *    Created : 03.01.2021
**/

#include <bits/stdc++.h>

using namespace std ;

typedef int_fast64_t ll ;

vector <int> SOE(ll n)
{
    vector <int> prime ;
    vector <ll> check((n >> 6) + 1 , 0) ;
    check[0] |= (1LL << 0) ;
    check[0] |= (1LL << 1) ;
    for(ll i = 4 ; i <= n ; i += 2)
        check[i >> 6] |= (1LL << (i & 63)) ;
    for(ll i = 3 ; i * i <= n ; i += 2)
        if(!(check[i >> 6] & (1LL << (i & 63))))
            for(ll j = i * i ; j <= n ; j += 2 * i)
                check[j >> 6] |= (1LL << (j & 63)) ;
    prime.push_back(2) ;
    for(ll i = 3 ; i <= n ; i += 2)
        if(!(check[i >> 6] & (1LL << (i & 63))))
            prime.push_back(i) ;
    return prime ;
}
vector <int> NOD(void)
{
    auto prime = SOE(1002) ;
    vector <int> nod((int)1e6 + 2 , 1) , n((int)1e6 + 2) ;
    for(int i = 0 ; i <= 1e6 ; ++i) n[i] = i ;
    for(auto &p : prime)
    {
        for(int i = p ; i <= 1e6 ; i += p)
        {
            if(p * p > n[i]) continue ;
            int cnt = 1 ;
            while(!(n[i] % p))
            {
                n[i] /= p ;
                ++cnt ;
            }
            nod[i] *= cnt ;
        }
    }
    for(int i = 1 ; i <= 1e6 ; ++i)
        if(n[i] > 1) nod[i] *= 2 ;
    return nod ;
}

int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;
    auto nod = NOD() ;
    vector <int> n((int)1e6 + 1 , 0) ;
    n[0] = 1 ;
    for(int i = 1 ; i <= 1e6 ; ++i)
        n[i] = n[i - 1] + nod[n[i - 1]] ;

    int t ;
    cin >> t ;
    for(int tc = 1 ; tc <= t ; ++tc)
    {
        cout << "Case " << tc << ": " ;
        int a , b ;
        cin >> a >> b ;
        int x = lower_bound(n.begin() , n.end() , a) - (n).begin() ;
        int y = upper_bound(n.begin() , n.end() , b) - (n).begin() - 1 ;
        cout << (y - x + 1) << '\n' ;
    }
    return 0 ;
}