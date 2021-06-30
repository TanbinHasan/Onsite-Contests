#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int t , i ; cin >> t ;
    for(i = 1 ; i <= t ; ++i)
    {
        int ar[3] ; cin >> ar[0] >> ar[1] >> ar[2] ;
        sort(ar , ar + 3) ;
        printf("Case %d: %d\n",i,ar[1]) ;
    }
    return 0 ;
}
