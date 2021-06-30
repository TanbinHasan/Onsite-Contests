#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int T , x ; cin >> T ;
    for(x = 1 ; x <= T ; ++x)
    {
        int t ; cin >> t ;
        int ar[t] , low = 0 , high = 0 , i ;
        for(i = 0 ; i < t ; ++i)
        {
            cin >> ar[i] ;
            if(i)
            {
                if(ar[i] > ar[i - 1]) ++high ;
                if(ar[i] < ar[i - 1]) ++low ;
            }
        }
        cout << "Case " << x << ": " << high << " " << low << endl ;
    }
    return 0 ;
}
