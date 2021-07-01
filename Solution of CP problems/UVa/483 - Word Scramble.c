#include<stdio.h>
#include<string.h>
int main(void)
{
    char text[100000] ;
    while(gets(text))
    {
        char word[100000] ;
        int i , j = 0 , k ;
        for(i = 0 ; i < strlen(text) ; ++i)
        {
            if(text[i] != ' '){word[j] = text[i] ; ++j ; }
            if((text[i] == ' ') || (i == (strlen(text) - 1)))
            {
                for(k = (j - 1) ; k >= 0 ; --k)
                {
                    printf("%c",word[k]) ;
                }
                if(text[i] == ' '){printf(" ") ; }
                if(i == (strlen(text) - 1)){printf("\n") ; break ; }
                j = 0 ;
            }
        }
    }
    return 0 ;
}
