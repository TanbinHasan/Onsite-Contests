#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    string s ;
    int x ;
    for(x = 1 ; cin >> s ; ++x)
    {
        cout << "Case " << x << ":" << endl ;
        int t , a , b , i , cnt ; cin >> t ;
        while(t--)
        {
            cin >> a >> b ;
            cnt = 1 ;
            for(i = min(a , b) ; i < max(a , b) ; ++i)
            {
                if(s[i] != s[i + 1]) cnt = 0 ;
            }
            if(cnt) cout << "Yes" << endl ;
            else cout << "No" << endl ;
        }
    }
    return 0 ;
}
