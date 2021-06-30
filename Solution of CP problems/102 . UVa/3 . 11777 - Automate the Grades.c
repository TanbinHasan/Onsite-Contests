#include<stdio.h>
int main(void)
{
    int T1 , T2 , F , A , C_T1 , C_T2 , C_T3 , x , i , sum = 0 ; scanf("%d",&x);
    for(i = 1 ; i <= x ; ++i)
    {
        scanf("%u %u %u %u %u %u %u",&T1,&T2,&F,&A,&C_T1,&C_T2,&C_T3) ;
        if(C_T1 >= C_T3 && C_T2 >= C_T3){ sum = T1 + T2 + F + A + (C_T1 + C_T2)/2 ; }
        else if(C_T2 >= C_T1 && C_T3 >= C_T1){ sum = T1 + T2 + F + A + (C_T3 + C_T2)/2 ; }
        else if(C_T1 >= C_T2 && C_T3 >= C_T2){ sum = T1 + T2 + F + A + (C_T1 + C_T3)/2 ; }
        if(sum >= 90){printf("Case %u: A\n",i);}
        else if(sum >= 80){printf("Case %u: B\n",i);}
        else if(sum >= 70) {printf("Case %u: C\n",i);}
        else if(sum >= 60){printf("Case %u: D\n",i);}
        else if(sum < 60){printf("Case %u: F\n",i);}
    }
    return 0 ;
}
