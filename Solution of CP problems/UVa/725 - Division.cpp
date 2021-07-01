/**
 *    Author : Tanbin_Hasan
 *    Created : 09.03.2021
**/
#include <bits/stdc++.h>

using namespace std ;

bool valid(int a , int b) {
  bitset<10> mark ;
  while (a || b) {
    mark[a % 10] = 1 ;
    mark[b % 10] = 1 ;
    a /= 10 ;
    b /= 10 ;
  }
  for (int i = 0 ; i < 10 ; ++i) {
    if (!mark[i]) {
      return false ;
    }
  }
  return true ;
}

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  int n ;
  bool flag = false ;
  while (cin >> n && n) {
    if (flag) {
      cout << '\n' ;
    }
    flag = true ;
    bool ok = false ;
    for (int i = 1234 ; i * n <= 98765 ; ++i) {
      int a = i * n ;
      if (!valid(a , i)) {
        continue ;
      }
      ok = true ;
      cout << setfill('0') << setw(5) << a ;
      cout << " / " ;
      cout << setfill('0') << setw(5) << i ;
      cout << " = " << n << '\n' ;
    }
    if (!ok) {
      cout << "There are no solutions for " << n << "." << '\n' ;
    }
  }
  return 0 ;
}