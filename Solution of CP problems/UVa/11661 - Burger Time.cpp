#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int len ;
    while(cin >> len && len)
    {
        string s ; cin >> s ;
        int i , cnt = 1 , mn = pow(2 , 30) ;
        for(i = 0 ; i < len ; ++i)
        {
            if(s[i] == 'Z'){mn = 0 ; break ; }
            else if(s[i] == 'D')
            {
                while(s[++i] == '.') ++cnt ;
                if(s[i] == 'R')
                {
                    mn = min(mn , cnt) ;
                }
                cnt = 1 ; --i ;
            }
            else if(s[i] == 'R')
            {
                for(++i ; s[i] == '.' ; ++i) ++cnt ;
                if(s[i] == 'D')
                {
                    mn = min(mn , cnt) ;
                }
                cnt = 1 ; --i ;
            }
        }
        cout << mn << endl ;
    }
    return 0 ;
}
