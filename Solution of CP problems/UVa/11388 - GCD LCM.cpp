/**
 *    Author  : Ador
 *    Created : 12.08.2020
**/
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cctype>
#define pi acos(-1.0)
#define L 10000050
typedef long long int ll ;
typedef unsigned long long int ull ;
using namespace std ;
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
    //freopen("input.txt" , "r" , stdin) ;
    //freopen("output.txt" , "w" , stdout) ;
    ll t ; cin >> t ;
    while(t--)
    {
        ll g , l ; cin >> g >> l ;
        if(!(l % g)) cout << g << " " << l << "\n" ;
        else cout << "-1\n" ;
    }
    return 0 ;
}
