#include<stdio.h>
int main(void)
{
    int a , b , x , y ;
    while(scanf("%d %d",&a,&b) == 2)
    {
        x = (a > b) ? a : b ; y = (a < b) ? a : b ;
        int max = 0 , i ;
        for( i = y ; i <= x ; ++i )
        {
            int n = i , count = 1 ;
            while(n > 1)
            {
                if(n%2){n = 3*n + 1 ;}
                else{n /= 2 ;} ++count ;
            }
            if( count > max ){ max = count ;}
        }
        printf("%d %d %d\n",a,b,max);
    }
    return 0 ;
}
