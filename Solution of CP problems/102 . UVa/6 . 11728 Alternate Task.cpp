#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cctype>
typedef long long int ll ;
typedef unsigned long long int ull ;
using namespace std ;
int factors_sum(int n)
{
    int i , j ;
    for(i = n ; i >= 0 ; --i)
    {
        int sum = 0 ;
        for(j = 1 ; j <= i ; ++j)
        {
            if(!(i % j)) sum += j ;
        }
        if(sum == n) return i ;
    }
    return -1 ;
}
int main(void)
{
    /*freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ; */
	int n , cs = 0 ;
	while(cin >> n and n)
    {
        printf("Case %d: %d\n" , ++cs , factors_sum(n)) ;
    }
    return 0 ;
}
