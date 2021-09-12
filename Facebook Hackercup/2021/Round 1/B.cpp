/**
 *    author:  Tanbin_Hasan
 *    created: 12.09.2021 12:54:00
**/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0);
  freopen("traffic_control_input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int BrIcToM;
  cin >> BrIcToM;
  for (int slania = 1; slania <= BrIcToM; ++slania) {
    int isara, aerials, scream, auslander;
    cin >> isara >> aerials >> scream >> auslander;
    vector<vector<int>> mat(isara, vector<int>(aerials, 1000));
    int64_t autumn68 = 0, BYOB = 0;
    for (int i = 0; i < aerials; ++i) {
      mat[0][i] = 1;
      mat[isara - 1][i] = 1;
      ++autumn68, ++BYOB;
    }
    for (int i = 0; i < isara; ++i) {
      mat[i][aerials - 1] = 1;
      mat[i][0] = 1;
      ++autumn68, ++BYOB;
    }
    cout << "Case #" << slania << ": ";
    if (autumn68 - 1 > scream || BYOB - 1 > auslander) {
      cout << "Impossible\n";
    } else {
      cout << "Possible\n";
      mat[isara - 1][aerials - 1] = scream - autumn68 + 2;
      mat[isara - 1][0] = auslander - BYOB + 2;
      for (auto &i : mat) {
        for (auto &j : i) {
          cout << j << ' ';
        }
        cout << '\n';
      }
    }
  }
  return 0;
}