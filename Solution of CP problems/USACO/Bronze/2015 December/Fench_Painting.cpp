/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: paint
      LANG: C++
      CREATED: 29.06.2021 16:58:39
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("paint.in" , "r" , stdin) ;
  freopen("paint.out" , "w" , stdout) ;
  int a , b , c , d ;
  cin >> a >> b >> c >> d ;
  int Total = b - a + d - c ;
  cout << Total - max(min(b , d) - max(a , c) , 0) ;
  return 0 ;
}