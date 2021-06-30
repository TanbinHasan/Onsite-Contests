#include<stdio.h>
#include<math.h>
int main(void)
{
    int t ; scanf("%d",&t) ;
    while(t--)
    {
        int n ; scanf("%d",&n) ;
        n *= 567 ;
        n /= 9 ;
        n += 7492 ;
        n *= 235 ;
        n /= 47 ;
        n -= 498 ;
        n /= 10 ;
        n %= 10 ;
        printf("%d\n",abs(n)) ;
    }
    return 0 ;
}
