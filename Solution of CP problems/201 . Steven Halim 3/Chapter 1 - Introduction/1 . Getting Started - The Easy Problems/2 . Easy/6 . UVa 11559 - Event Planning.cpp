#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int n , b , h , w ;
    while(cin >> n >> b >> h >> w)
    {
        int total , h_cost , mini = pow(2 , 30) , i ;
        while(h--)
        {
            int total = 0 , w_seat[w] ;
            cin >> h_cost ;
            for(i = 0 ; i < w ; ++i) cin >> w_seat[i] ;
            sort(w_seat , w_seat + w) ;
            if(w_seat[w - 1] >= n)
            {
                if((n * h_cost) <= b)
                {
                    total += (n * h_cost) ;
                    mini = min(mini , total) ;
                }
            }
        }
        if(mini == pow(2 , 30)) cout << "stay home" << endl ;
        else cout << mini << endl ;
    }
    return 0 ;
}
