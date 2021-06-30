/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: shell
      LANG: C++
      CREATED: 01.07.2021 01:32:22
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("shell.in" , "r" , stdin) ;
  freopen("shell.out" , "w" , stdout) ;
  vector<int64_t> cnt(4) ;
  vector<int64_t> shell = {0 , 1 , 2 , 3} ;
  int64_t t ;
  cin >> t ;
  while (t--) {
    int64_t a , b , g ;
    cin >> a >> b >> g ;
    swap(shell[a] , shell[b]) ;
    ++cnt[shell[g]] ;
  }
  cout << *max_element(cnt.begin() , cnt.end()) ;
  return 0 ;
}