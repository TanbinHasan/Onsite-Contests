#include<bits/stdc++.h>
using namespace std ;
int main(void)
{
    int cc , nc ;
    while(cin >> cc >> nc && (cc != -1 && nc != -1))
    {
        int way1 = abs(cc - nc) , way2 = (min(cc , nc) + (100 - max(cc , nc))) ;
        cout << min(way1 , way2) << endl ;
    }
    return 0 ;
}
