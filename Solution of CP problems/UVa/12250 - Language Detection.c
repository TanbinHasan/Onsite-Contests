#include<stdio.h>
#include<string.h>
char words[][2][40] = {"HELLO","ENGLISH","HALLO","GERMAN","HOLA","SPANISH","BONJOUR","FRENCH","CIAO", "ITALIAN","ZDRAVSTVUJTE" , "RUSSIAN"} ;
int main(void)
{
    int i , j = 0 ; char input[40];
    while(1)
    {
    gets(input) ;
    if(!strcmp(input , "#")){return 0 ;}
    for(i = 0 ;strcmp(words[i][0],"");++i)
    {
        if(!strcmp(input , words[i][0])){ printf("Case %d: %s\n", ++j , words[i][1]); break; }
    }
    if(!strcmp(words[i][0],"")){printf("Case %d: UNKNOWN\n", ++j  ) ;}
    }
    return 0;
}
