#include<bits/stdc++.h>
#include<string>
using namespace std ;
int main(void)
{
    int t , i ; cin >> t ;
    string s[t] ;
    for(i = 0 ; i < t ; ++i) cin >> s[i] ;
    int cnt = ceil(t/16.0) ;
    for(i = 0 ; i < (16*cnt) ; ++i)
    {
        cout << s[i % t] ;
        if(((i + 1) % 16) == 12) cout << ": Rujia" << endl ;
        else if(!(i % 4)) cout << ": Happy" << endl ;
        else if((i % 4) == 1) cout << ": birthday" << endl ;
        else if((i % 4) == 2) cout << ": to" << endl ;
        else if((i % 4) == 3) cout << ": you" << endl ;
    }
    return 0 ;
}
