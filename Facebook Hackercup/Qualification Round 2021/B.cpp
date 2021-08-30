/**
 *    author:  Tanbin_Hasan
 *    created: 28.08.2021 16:57:40
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
    int len, cc = 0;
    cin >> len;
    vector<string> vs(len);
    vector<vector<int>> dotdot(len, vector<int> (len));
    for (int i = 0; i < len; ++i) {
      cin >> vs[i];
      for (int j = 0; j < len; ++j) {
        if (vs[i][j] == '.') dotdot[i][j] = cc++;
      }
    }
    int mn = INT_MAX;
    for (int i = 0; i < len; ++i) {
      bool ok = true;
      int dot = 0;
      for (int j = 0; j < len; ++j) {
        if (vs[i][j] == 'O') {
          ok = false;
          break;
        }
        dot += (vs[i][j] == '.');
      }
      if (ok) mn = min(mn, dot);
    }
    for (int j = 0; j < len; ++j) {
      bool ok = true;
      int dot = 0;
      for (int i = 0; i < len; ++i) {
        if (vs[i][j] == 'O') {
          ok = false;
          break;
        }
        dot += (vs[i][j] == '.');
      }
      if (ok) mn = min(mn, dot);
    }
    set<set<int>> way;
    for (int i = 0; i < len; ++i) {
      bool ok = true;
      int dot = 0;
      for (int j = 0; j < len; ++j) {
        if (vs[i][j] == 'O') {
          ok = false;
          break;
        }
        dot += (vs[i][j] == '.');
      }
      if (ok && dot == mn) {
        set<int> s;
        for (int j = 0; j < len; ++j) {
          if (vs[i][j] == '.') s.insert(dotdot[i][j]);
        }
        if (!s.empty()) way.insert(s);
      }
    }
    for (int j = 0; j < len; ++j) {
      bool ok = true;
      int dot = 0;
      for (int i = 0; i < len; ++i) {
        if (vs[i][j] == 'O') {
          ok = false;
          break;
        }
        dot += (vs[i][j] == '.');
      }
      if (ok && dot == mn) {
        set<int> s;
        for (int i = 0; i < len; ++i) {
          if (vs[i][j] == '.') s.insert(dotdot[i][j]);
        }
        if (!s.empty()) way.insert(s);
      }
    }
    if (way.empty()) {
      cout << "Case #" << slania << ": " << "Impossible\n";
    } else {
      cout << "Case #" << slania << ": " << mn << ' ' << (int)way.size() << '\n';
    }
  }
  return 0;
}