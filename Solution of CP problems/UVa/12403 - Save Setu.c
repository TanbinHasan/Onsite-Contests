#include<stdio.h>
#include<string.h>
int main(void)
{
    int t , sum = 0 ; scanf("%d",&t) ;
    while(t--)
    {
        char str[10] ; scanf("%s",&str) ;
        int x ;
        if(!strcmp(str , "donate"))
        {
            scanf("%d",&x) ;
            sum += x ;
        }
        else{printf("%d\n",sum) ; }
    }
    return 0 ;
}
