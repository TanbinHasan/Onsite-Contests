/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: gift1
      LANG: C++
      CREATED: 28.04.2021 22:47:55
*/
#include <bits/stdc++.h>

using namespace std ;

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("gift1.in" , "r" , stdin) ;
  freopen("gift1.out" , "w" , stdout) ;
  int NP ;
  cin >> NP ;
  vector<string> name(NP) ;
  for (auto &i : name) {
    cin >> i ;
  }
  unordered_map<string,int> money ;
  while (NP--) {
    string s ;
    cin >> s ;
    int tot , per ; // tot = total money , per = total person
    cin >> tot >> per ;
    if (!tot && !per) {
      continue ;
    }
    int perh = tot / per ; // perh = per head
    money[s] -= tot ;
    money[s] += (tot - perh * per) ;
    while (per--) {
      cin >> s ;
      money[s] += perh ;
    }
  }
  for (auto &i : name) {
    cout << i << ' ' << money[i] << '\n' ;
  } 
  return 0 ;
}