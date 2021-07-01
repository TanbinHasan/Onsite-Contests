#include<bits/stdc++.h>
#include<string>
using namespace std ;
int main(void)
{
    int t ; cin >> t ;
    while(t--)
    {
        int T ; cin >> T ;
        string s[T] , s2 ;
        int i , sum = 0 , num ;
        for(i = 0 ; i < T ; ++i)
        {
            cin >> s[i] ;
            if(s[i] == "RIGHT")
            {
                ++sum ;
            }
            else if(s[i] == "LEFT")
            {
                --sum ;
            }
            else
            {
                cin >> s2 >> num ;
                s[i] = s[num - 1] ;
                if(s[i] == "RIGHT") ++sum ;
                else --sum ;
            }
        }
        cout << sum << endl ;
    }
    return 0 ;
}
