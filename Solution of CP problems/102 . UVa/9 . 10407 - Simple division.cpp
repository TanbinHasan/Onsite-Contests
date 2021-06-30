/**
 *    Author  : Ador
 *    Created : 27.08.2020
**/
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <iterator>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cctype>
#define pi acos(-1.0)
#define L 31250001
#define SP(x) cout << fixed << setprecision(x)
//#define FILE_IO
typedef long long int ll ;
typedef unsigned long long int ull ;
using namespace std ;
int main(void)
{
    ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
    #ifdef FILE_IO
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    #endif
    while(1)
    {
        ll ar[1001] , n = 0 , i ;
        while((cin >> ar[n++]) and ar[n - 1]) ;
        if(!ar[0]) break ;
        ll g = 0 ;
        for(i = 0 ; i < n - 2 ; ++i)
            g = __gcd(g , ar[i] - ar[i + 1]) ;
        cout << llabs(g) << "\n" ;
    }
    return 0 ;
}
