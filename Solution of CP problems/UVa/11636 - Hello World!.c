#include<stdio.h>
int main(void)
{
    int number , i , j = 1 ;
    while (  ( scanf("%d",&number ) == 1) && ( number >= 0 )  )
    {
        if ( number == 1 ){printf("Case %d: 0\n" , j ) ; }
        for ( i = 0 ; i < number ; ++i )
        {
            if ( ( number > pow( 2 , i ) )  && ( number <= pow( 2 , i + 1 ) )  ){printf("Case %d: %d\n", j , i+1 ) ; }
        }
        ++j ;
    }
    return 0 ;
}
