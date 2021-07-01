/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: billboard
      LANG: C++
      CREATED: 30.06.2021 00:47:03
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("billboard.in" , "r" , stdin) ;
  freopen("billboard.out" , "w" , stdout) ;
  vector<tuple<int,int,int,int>> vt(2) ;
  for (auto &[a,b,c,d] : vt) {
    cin >> a >> b >> c >> d ;
  }
  int Need = (get<2>(vt[0]) - get<0>(vt[0])) * (get<3>(vt[0]) - get<1>(vt[0])) ;
  auto intersect = [](tuple<int,int,int,int> m , tuple<int,int,int,int> n) {
    auto [a,b,c,d] = m ;
    auto [p,q,r,s] = n ;
    int x = max(0 , min(c,r) - max(a,p)) ;
    int y = max(0 , min(d,s) - max(b,q)) ;
    return x * y ;
  };
  auto [l,m,n,o] = vt[0] ;
  auto [p,q,r,s] = vt[1] ;
  int a = max(l,p) ;
  int b = max(m,q) ;
  int c = min(n,r) ;
  int d = min(o,s) ;
  if ((a <= l && c >= n && (b <= m || d >= o)) || (b <= m && d >= o && (a <= l || c >= n))) {
    Need -= intersect(vt[0] , vt[1]) ;
  }
  cout << Need ;
  return 0 ;
}