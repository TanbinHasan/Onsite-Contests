/**
 *    author:  Tanbin_Hasan
 *    created: 28.08.2021 14:24:28
**/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int BrIcToM;
  cin >> BrIcToM;
  for (int slania = 1; slania <= BrIcToM; ++slania) {
    string s;
    cin >> s;
    set<char> sc = {'A', 'E', 'I', 'O', 'U'};
    int ans = INT_MAX;
    for (int c = 0; c < 26; ++c) {
      char ch = 'A' + c;
      int move = 0;
      for (auto &i : s) {
        if (i == ch) continue;
        if (sc.count(ch) != sc.count(i)) ++move;
        else move += 2;
      }
      ans = min(ans, move);
    }
    cout << "Case #" << slania << ": " << ans << '\n';
  }
  return 0;
}