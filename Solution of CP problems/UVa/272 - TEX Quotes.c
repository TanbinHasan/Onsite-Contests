#include<stdio.h>
#include<string.h>
int main(void)
{
    int cnt = 0 , i ;
    char x[1000];
    while(gets(x))
    {
        if(x==EOF){break;}
        else
        {
            for(i = 0 ; i < strlen(x) ; ++i)
            {
                if(x[i] =='"')
                {
                    ++cnt ;
                    if(cnt % 2){printf("``") ; }
                    else{printf("''") ; }
                }
                else{printf("%c",x[i]) ; }
             }
             printf("\n") ;
        }
    }
    return 0;
}