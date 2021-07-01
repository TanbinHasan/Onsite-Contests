#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int t , x ; cin >> t ;
    for(x = 1 ; x <= t ; ++x)
    {
        string s[10] ;
        int ar[10] , i , maxi = -pow(2,31) ;
        for(i = 0 ; i < 10 ; ++i)
        {
            cin >> s[i] >> ar[i] ;
            maxi = max(maxi , ar[i]) ;
        }
        cout << "Case " << "#" << x << ":" << endl ;
        for(i = 0 ; i < 10 ; ++i)
        {
            if(ar[i] == maxi) cout << s[i] << endl ;
        }
    }
    return 0 ;
}
