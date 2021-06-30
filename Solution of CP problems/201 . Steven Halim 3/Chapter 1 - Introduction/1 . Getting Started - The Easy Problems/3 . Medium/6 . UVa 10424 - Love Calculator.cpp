#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std ;
int sum(string s)
{
    int total = 0 , i ;
    for(i = 0 ; i < s.size() ; ++i)
    {
        if(islower(s[i])) total += (s[i] - 96) ;
        else if(isupper(s[i])) total += (s[i] - 64) ;
        else if(isdigit(s[i])) total += (s[i] - 48) ;
    }
    while(total > 9) total = sum(to_string(total)) ;
    return total ;
}
int main(void)
{
    string a , b ;
    while(getline(cin , a) && getline(cin , b))
    {
        double love = (((double)(min(sum(a) , sum(b)))/max(sum(a),sum(b)))*100) ;
        printf("%.2lf %\n",love) ;
    }
    return 0 ;
}
