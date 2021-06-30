#include<stdio.h>
#include<string.h>
int main(void)
{
    int t ; scanf("%d",&t) ;
    while(t--)
    {
        char num[30] ; scanf("%s",&num) ;
        if(strlen(num) == 3)
        {
            if(num[0] == 'o' && num[1] == 'n' && num[2] == 'e'){printf("1\n") ; }
            else if(num[0] == 'o' && num[1] == 'n'){printf("1\n") ; }
            else if(num[1] == 'n' && num[2] == 'e'){printf("1\n") ; }
            else if(num[0] == 'o' && num[2] == 'e'){printf("1\n") ; }
            else if(num[0] == 't' && num[1] == 'w' && num[2] == 'o'){printf("2\n") ; }
            else if(num[0] == 't' && num[1] == 'w'){printf("2\n") ; }
            else if(num[1] == 'w' && num[2] == 'o'){printf("2\n") ; }
            else if(num[0] == 't' && num[2] == 'o'){printf("2\n") ; }
        }
        else{printf("3\n") ; }
    }
    return 0 ;
}
