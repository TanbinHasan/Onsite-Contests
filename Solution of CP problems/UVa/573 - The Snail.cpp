#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    double h , u , d , f ;
    while(cin >> h >> u >> d >> f && h)
    {
        double i , u_f = u , sum = 0 ;
        for(i = 1 ; ; ++i)
        {
            if((i > 1) && (u_f > 0)){u_f -= (u*(f/100.0)) ; }
            sum += (u_f - d) ;
            if((sum + d) > h){printf("success on day %.0lf\n",i) ; break ; }
            if(sum < 0){cout << "failure on day " << noshowpoint << i << endl ; break ; }
        }
    }
    return 0 ;
}
