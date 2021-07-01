/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: beads
      LANG: C++
      CREATED: 28.04.2021 02:06:32
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("beads.in" , "r" , stdin) ;
  freopen("beads.out" , "w" , stdout) ;
  int len ;
  cin >> len ;
  string s ;
  cin >> s ;
  s += s ;
  int mx = 0 ;
  for (int l = 0 ; l < len ; ++l) {
    int low = l , high = l + len ;
    for (int i = low ; i < high ; ++i) {
      int a = i - 1 , b = i ;
      int r1 = 0 , b1 = 0 , r2 = 0 , b2 = 0 ;
      for (int j = a ; j >= low ; --j) {
        if (s[j] == 'b') {
          break ;
        } else {
          ++r1 ;
        }
      }
      for (int j = a ; j >= low ; --j) {
        if (s[j] == 'r') {
          break ;
        } else {
          ++b1 ;
        }
      }
      for (int j = b ; j < high ; ++j) {
        if (s[j] == 'b') {
          break ;
        } else {
          ++r2 ;
        }
      }
      for (int j = b ; j < high ; ++j) {
        if (s[j] == 'r') {
          break ;
        } else {
          ++b2 ;
        }
      }
      mx = max({mx , r1 + b2 , b1 + r2}) ;
    }
  }
  cout << mx << '\n' ;
  return 0 ;
}