/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: blocks
      LANG: C++
      CREATED: 01.07.2021 19:47:53
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("blocks.in" , "r" , stdin) ;
  freopen("blocks.out" , "w" , stdout) ;
  vector<int64_t> cnt(26) ;
  int64_t n ;
  cin >> n ;
  while (n--) {
    string a , b ;
    cin >> a >> b ;
    for (int64_t i = 0 ; i < 26 ; ++i) {
      int64_t x = count(a.begin() , a.end() , 'a' + i) ;
      int64_t y = count(b.begin() , b.end() , 'a' + i) ;
      cnt[i] += max(x , y) ;
    }
  }
  for (auto &i : cnt) {
    cout << i << '\n' ;
  }
  return 0 ;
}