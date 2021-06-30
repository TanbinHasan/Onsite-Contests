#include<cstdio>
using namespace std ;
int main(void)
{
    int t , i ; cin >> t ;
    for(i = 1 ; i <= t ; ++i)
    {
        int l , w , h ; cin >> l >> w >> h ;
        if(l <= 20 && w <= 20 && h <= 20){printf("Case %d: good\n",i) ; }
        else{printf("Case %d: bad\n",i) ; }
    }
    return 0 ;
}
