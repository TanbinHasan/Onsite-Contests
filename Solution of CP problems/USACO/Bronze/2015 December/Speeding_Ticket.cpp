/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: speeding
      LANG: C++
      CREATED: 01.07.2021 14:01:51
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("speeding.in" , "r" , stdin) ;
  freopen("speeding.out" , "w" , stdout) ;
  vector<int64_t> a(101) ;
  vector<int64_t> b(101) ;
  int64_t n , m , x , y , cur = 1 ;
  cin >> n >> m ;
  while (n--) {
    cin >> x >> y ;
    a[cur] = y ;
    a[x + cur - 1] = y ;
    cur += x ;
  }
  cur = 1 ;
  while (m--) {
    cin >> x >> y ;
    b[cur] = y ;
    b[x + cur - 1] = y ;
    cur += x ;
  }
  int64_t mx = 0 ;
  for (int64_t i = 0 ; i < 101 ; ++i) {
    if (!a[i] && i) {
      a[i] = a[i - 1] ;
    }
    if (!b[i] && i) {
      b[i] = b[i - 1] ;
    }
    mx = max(mx , (int64_t) (b[i] - a[i])) ;
  }
  cout << mx ;
  return 0 ;
}