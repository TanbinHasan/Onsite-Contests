#include<iostream>
using namespace std ;
int main(void)
{
    int t1 ; cin >> t1;
    while(t1--)
    {
        int t2 , area , ani , eco , sum = 0 ; cin >> t2 ;
        while(t2--)
        {
            cin >> area >> ani >> eco ;
            sum += (area*eco) ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}
