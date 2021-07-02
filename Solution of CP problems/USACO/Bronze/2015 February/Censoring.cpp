/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: censor
      LANG: C++
      CREATED: 02.07.2021 17:05:38
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("censor.in" , "r" , stdin) ;
  freopen("censor.out" , "w" , stdout) ;
  string s , t ;
  cin >> s >> t ;
  string ans ;
  for (auto &i : s) {
    ans.push_back(i) ;
    if ((int) ans.size() < (int) t.size()) {
      continue ;
    }
    bool ok = true ;
    for (int64_t j = (int) ans.size() - 1 , k = (int) t.size() - 1 ; k >= 0 ; --j , --k) {
      if (ans[j] != t[k]) {
        ok = false ;
        break ;
      }
    }
    if (ok) {
      ans.resize((int) ans.size() - (int) t.size()) ;
    }
  }
  cout << ans ;
  return 0 ;
}