/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: mixmilk
      LANG: C++
      CREATED: 01.07.2021 03:11:35
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("mixmilk.in" , "r" , stdin) ;
  freopen("mixmilk.out" , "w" , stdout) ;
  vector<pair<int64_t,int64_t>> vp(3) ;
  for (auto &[x,y] : vp) {
    cin >> x >> y ;
  }
  int64_t i = -1 , j = 0 ;
  for (int64_t t = 0 ; t < 100 ; ++t) {
    auto &[a,b] = vp[++i % 3] ;
    auto &[x,y] = vp[++j % 3] ;
    int64_t pour = min(b , x - y) ;
    y += pour ;
    b -= pour ;
  }
  for (int64_t i = 0 ; i < 3 ; ++i) {
    cout << vp[i].second << '\n' ;
  }
  return 0 ;
}