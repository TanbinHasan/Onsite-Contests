#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cctype>
typedef long long int ll ;
typedef unsigned long long int ull ;
using namespace std ;
ll gcd(ll x , ll y)
{
    if(y == 0) return x ;
    return gcd(y , x % y) ;
}
int main(void)
{
	int n ;
	while(scanf("%d",&n) and n)
    {
        int i , j , sum = 0 ;
        for(i = 1 ; i < n ; ++i)
        {
            for(j = i + 1 ; j <= n ; ++j)
            {
                sum += gcd(i , j) ;
            }
        }
        cout << sum << endl ;
    }
    return 0 ;
}
