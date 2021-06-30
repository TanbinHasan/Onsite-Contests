#include<stdio.h>
int main(void)
{
    int n ; while(scanf("%d",&n) == 1)
    {
        if(!n){break ;}
        int a , b , i ; scanf("%d %d",&a,&b) ;
        for(i = 0; i < n ;++i)
        {
            int x , y ; scanf("%d %d",&x,&y) ;
            if((x == a) || (y == b)){ printf("divisa\n") ; }
            else if((x > a) && (y > b)){ printf("NE\n") ; }
            else if((x < a) && (y > b)){ printf("NO\n") ; }
            else if((x < a) && (y < b)){ printf("SO\n") ; }
            else if((x > a) && (y < b)){ printf("SE\n") ; }
        }
    }
    return 0 ;
}
