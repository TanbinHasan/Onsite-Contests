#include<iostream>
#include<string>
using namespace std ;
int main(void)
{
    int t , sum = 0 ; cin >> t ;
    while(t--)
    {
        string str ; cin >> str ;
        int x ;
        if(str == "donate")
        {
            cin >> x ;
            sum += x ;
        }
        else{cout << sum << endl ; }
    }
    return 0 ;
}
