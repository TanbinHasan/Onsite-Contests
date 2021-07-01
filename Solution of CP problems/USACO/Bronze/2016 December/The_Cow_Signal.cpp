/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: cowsignal
      LANG: C++
      CREATED: 01.07.2021 15:52:44
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("cowsignal.in" , "r" , stdin) ;
  freopen("cowsignal.out" , "w" , stdout) ;
  int64_t m , n , k ;
  cin >> m >> n >> k ;
  vector<string> vs(m) ;
  for (auto &i : vs) {
    cin >> i ;
    string s ;
    for (auto &j : i) {
      s += string(k , j) ;
    }
    for (int64_t j = 0 ; j < k ; ++j) {
      cout << s << '\n' ;
    }
  }
  return 0 ;
}