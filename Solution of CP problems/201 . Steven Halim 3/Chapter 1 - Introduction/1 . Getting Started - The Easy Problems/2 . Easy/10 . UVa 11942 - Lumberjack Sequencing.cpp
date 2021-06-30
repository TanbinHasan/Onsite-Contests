#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int t ; cin >> t ;
    cout << "Lumberjacks:\n" ;
    while(t--)
    {
        int ar[10] , i , low = 1 , high = 1 ;
        for(i = 0 ; i < 10 ; ++i)
        {
            cin >> ar[i] ;
            if(i)
            {
                if(ar[i] > ar[i - 1])++high ;
                else ++low ;
            }
        }
        if(high == 10 || low == 10) cout << "Ordered\n" ;
        else cout << "Unordered\n" ;
    }
    return 0 ;
}
