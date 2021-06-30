/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: square
      LANG: C++
      CREATED: 29.06.2021 23:22:48
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("square.in" , "r" , stdin) ;
  freopen("square.out" , "w" , stdout) ;
  int64_t a , b , c , d ;
  cin >> a >> b >> c >> d ;
  int64_t p , q , r , s ;
  cin >> p >> q >> r >> s ;
  a = min(a,p) ;
  b = min(b,q) ;
  c = max(c,r) ;
  d = max(d,s) ;
  int64_t mx = max(c - a , d - b) ;
  cout << mx * mx ; 
  return 0 ;
}