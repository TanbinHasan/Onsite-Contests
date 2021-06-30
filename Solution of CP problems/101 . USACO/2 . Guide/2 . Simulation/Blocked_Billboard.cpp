/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: billboard
      LANG: C++
      CREATED: 29.06.2021 19:02:27
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("billboard.in" , "r" , stdin) ;
  freopen("billboard.out" , "w" , stdout) ;
  vector<tuple<int,int,int,int>> vt(3) ;
  for (auto &[a,b,c,d] : vt) {
    cin >> a >> b >> c >> d ;
  }
  int ans = 0 ;
  for (int i = 0 ; i < 2 ; ++i) {
    auto &[a,b,c,d] = vt[i] ;
    ans += (d - b) * (c - a) ;
  }
  auto intersect = [](tuple<int,int,int,int> m , tuple<int,int,int,int> n) {
    auto [p,q,r,s] = m ;
    auto [a,b,c,d] = n ;
    int x = max(0 , min(c,r) - max(a,p)) ;
    int y = max(0 , min(d,s) - max(b,q)) ;
    return x * y ;
  };
  cout << ans - intersect(vt[0] , vt[2]) - intersect(vt[1] , vt[2]) ;
  return 0 ;
}