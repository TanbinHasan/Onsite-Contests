#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        int ar[n] , i ;
        for(i = 0 ; i < n ; ++i)
        {
            cin >> ar[i] ;
        }
        sort(ar , ar + n) ;
        cout << (2*(ar[n - 1] - ar[0])) << '\n' ;
    }
    return 0 ;
}
