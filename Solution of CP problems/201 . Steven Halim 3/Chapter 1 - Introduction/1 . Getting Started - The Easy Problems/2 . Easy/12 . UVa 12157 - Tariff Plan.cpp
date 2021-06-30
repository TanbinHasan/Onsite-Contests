#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int t , x ; cin >> t ;
    for(x = 1 ; x <= t ; ++x)
    {
        int n ; cin >> n ;
        int i , a , mile = 0 , juice = 0 ;
        for(i = 0 ; i < n ; ++i)
        {
            cin >> a ;
            mile += (((a/30) + 1)*10) ;
            juice += (((a/60) + 1)*15) ;
        }
        if(mile < juice) cout << "Case " << x << ": Mile " << mile << endl ;
        else if(mile > juice) cout << "Case " << x << ": Juice " << juice << endl ;
        else cout << "Case " << x << ": Mile Juice " << juice << endl ;
    }
    return 0 ;
}
