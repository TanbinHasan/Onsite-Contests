#include<bits/stdc++.h>
#include<string>
using namespace std ;
int sum_of_digits(int num)
{
    string n = to_string(num) ;
    int sum = 0 , i ;
    for(i = 0 ; i < n.size() ; ++i) sum += (n[i] - 48) ;
    return sum ;
}
int main(void)
{
    int number , sum ;
    while(cin >> number && number)
    {
        sum = number ;
        while(sum > 9)
        {
            sum = sum_of_digits(sum) ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}
