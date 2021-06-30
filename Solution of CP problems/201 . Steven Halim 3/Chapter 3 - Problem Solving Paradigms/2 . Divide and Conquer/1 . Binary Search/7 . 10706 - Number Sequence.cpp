/**
 *    Author : Tanbin_Hasan
 *    Created : 10.03.2021
**/
#include <bits/stdc++.h>

using namespace std ;

long long tot_dig(int i) {
  long long pw = log10l((long double)i) ;
  long long res = ((i < 10) ? (i) : (9)) , x ;
  while (i >= 10) {
    x = i - (long long) powl(10.0L , pw) + 1 ;
    res += x * (pw + 1) ;
    i -= x ;
    --pw ;
  }
  return res ;
}

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  long long limit = 2147483647 ;
  vector<long long> pre(2 , 1) ;
  pre[0] = 0 ;
  for (int i = 2 ;  ; ++i) {
    long long x = tot_dig(i) ;
    pre.push_back(pre[i - 1] + x) ;
    if (pre[i] > limit) {
      break ;
    }
  }
  int t ;
  cin >> t ;
  up :
  while (t--) {
    int i ;
    cin >> i ;
    int x = lower_bound(pre.begin() , pre.end() , i) - (pre).begin() ;
    i -= pre[x - 1] ;
    vector<long long> ans(1 , 0) ;
    for (int j = 1 ; j < x + 1 ; ++j) {
      string s = to_string(j) ;
      for (auto &ch : s) {
        ans.push_back(ch - '0') ;
        if ((int) ans.size() == i + 1) {
          cout << ans[i] << '\n' ;
          goto up ;
        }
      }
    }
  }
  return 0 ;
}