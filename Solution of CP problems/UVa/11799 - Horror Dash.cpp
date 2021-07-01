#include <bits/stdc++.h>
using namespace std ;
int main(void)
{
    int T , t , i , j = 1 ; cin >> T ;
    for(j = 1 ; j <= T ; ++j)
    {
        cin >> t ;
        int ar[t] ;
        for(i = 0 ; i < t ; ++i)
        {
            cin >> ar[i] ;
        }
        sort(ar , ar + t) ;
        printf("Case %d: %d\n",j,ar[t-1]) ;
    }
    return 0 ;
}
