/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: measurement
      LANG: C++
      CREATED: 02.07.2021 01:17:19
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("measurement.in" , "r" , stdin) ;
  freopen("measurement.out" , "w" , stdout) ;
  vector<int64_t> ar = {7 , 7 , 7} ;
  map<string,int64_t> ind ;
  ind["Bessie"] = 0 ;
  ind["Elsie"] = 1 ;
  ind["Mildred"] = 2 ;
  int64_t n ;
  cin >> n ;
  vector<tuple<int64_t,string,int64_t>> vt(n) ;
  for (auto &[x , y , z] : vt) {
    cin >> x >> y >> z ;
  }
  sort(vt.begin() , vt.end()) ;
  int64_t pre = 7 ;
  int64_t ans = 0 ;
  for (int64_t i = 0 ; i < n ; ++i) {
    auto [x , y , z] = vt[i] ;
    ar[ind[y]] += z ;
    if (i < n - 1) {
      if (x == get<0>(vt[i + 1])) {
        continue ;
      }
    }
    int64_t cur = 0 ;
    int64_t mx = *max_element(ar.begin() , ar.end()) ;
    for (int64_t m = 0 ; m < 3 ; ++m) {
      if (ar[m] == mx) {
        cur |= (1LL << m) ;
      }
    }
    ans += (cur != pre) ;
    pre = cur ;
  }
  cout << ans ;
  return 0 ;
}