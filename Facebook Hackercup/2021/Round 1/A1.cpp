/**
 *    author:  Tanbin_Hasan
 *    created: 11.09.2021 23:08:57
**/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0);
  freopen("weak_typing_chapter_1_input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int BrIcToM;
  cin >> BrIcToM;
  for (int slania = 1; slania <= BrIcToM; ++slania) {
    int len;
    cin >> len;
    string s, temp;
    cin >> s;
    for (auto &i : s) {
      if (i != 'F') temp.push_back(i);
    }
    int ans = 0;
    len = (int)temp.size();
    for (int i = 1; i < len; ++i) {
      ans += (temp[i - 1] != temp[i]);
    }
    cout << "Case #" << slania << ": " << ans << '\n';
  }
  return 0;
}