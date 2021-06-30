#include<stdio.h>
int main(void)
{
    int a , b , c , d ;
    while(scanf("%d %d %d %d",&a,&b,&c,&d) == 4)
    {
        if(!a && !b && !c && !d){break ; }
        int angle = 0 ;
        angle += (2*360) ;
        if(a >= b){angle += ((a - b)*9) ; }
        else{angle += ((40 - (b - a))*9) ; }
        angle += 360 ;
        if(c >= b){angle += ((c - b)*9) ; }
        else{angle += ((40 - (b - c))*9) ; }
        if(c >= d){angle += ((c - d)*9) ; }
        else{angle += ((40 - (d - c))*9) ; }
        printf("%d\n",angle) ;
    }
    return 0 ;
}
