#include <iostream>
#include <cmath>
using namespace std ;
int main(void)
{
    int t ; cin >> t ;
    while(t--)
    {
        int n , a , b , i , dif , cnt = 1 ; cin >> n ;
        for(i = 0 ; i < n ; ++i)
        {
            cin >> a >> b ;
            if(!i) dif = abs(a - b) ;
            else if(abs(a - b) == dif) ++cnt ;
        }
        if(cnt == n) cout << "yes" << endl ;
        else cout << "no" << endl ;
        if(t) cout << endl ;
    }
    return 0 ;
}
