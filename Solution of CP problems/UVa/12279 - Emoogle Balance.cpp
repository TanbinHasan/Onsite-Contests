#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    for(int x = 1 ; ;++x)
    {
        int t ; cin >> t ;
        if(!t){break ; }
        int num , sum1 = 0 , sum2 = 0 , i ;
        for(i = 0 ; i < t ; ++i)
        {
            cin >> num ;
            if(num){++sum1 ; }
            else{++sum2 ; }
        }
        printf("Case %d: %d\n",x,(sum1 - sum2)) ;
    }
    return 0 ;
}
