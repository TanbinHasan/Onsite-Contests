/*
      ID: Tanbin Hasan Ador [tanvirh5]
      TASK: friday
      LANG: C++
      CREATED: 28.04.2021 02:58:46
*/
#include <bits/stdc++.h>

using namespace std ;

bool leap(int y) {
  if (!(y % 100)) {
    return y % 400 == 0 ;
  }
  return y % 4 == 0 ;
}

int main(void) {
  ios::sync_with_stdio(false) ; cin.tie(0) ;
  freopen("friday.in" , "r" , stdin) ;
  freopen("friday.out" , "w" , stdout) ;
  vector<string> day = {"Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat"} ;
  vector<string> ar = {"Sat" , "Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri"} ;
  vector<int> month = {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;
  unordered_map<string,int> um ;
  long long tot = 0 ;
  int n ;
  cin >> n ;
  for (int year = 1900 ; year < 1900 + n ; ++year) {
    for (int m = 1 ; m < 13 ; ++m) {
      long long temp = tot + 13 ;
      ++um[day[temp % 7]] ;
      if (m == 2) {
        tot += month[m] + leap(year) ;
      } else {
        tot += month[m] ;
      }
    }
  }
  cout << um[ar[0]] ;
  for (int i = 1 ; i < 7 ; ++i) {
    cout << ' ' << um[ar[i]] ;
  }
  cout << '\n' ;
  return 0 ;
}