/**
 *    Author : Tanbin_Hasan
 *    Created : 09.03.2021
**/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  vector<vector<int>> ind(124) ;
  string s ;
  cin >> s ;
  for (int i = 0 ; i < (int) s.size() ; ++i) {
    ind[s[i]].push_back(i) ;
  }
  int t ;
  cin >> t ;
  while (t--) {
    string a ;
    cin >> a ;
    bool ok = true , flag = true ;
    int x , y = -1 , cur ;
    for (auto &i : a) {
      cur = upper_bound(ind[i].begin() , ind[i].end() , y) - (ind[i]).begin() ;
      if (cur == (int) ind[i].size()) {
        ok = false ;
        cout << "Not matched\n" ;
        break ;
      }
      y = ind[i][cur] ;
      if (flag) {
        x = y ;
        flag = false ;
      }
    }
    if (ok) {
      cout << "Matched " << x << ' ' << y << '\n' ;
    }
  }
  return 0 ;
}