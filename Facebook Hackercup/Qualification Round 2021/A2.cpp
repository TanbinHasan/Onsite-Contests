/**
 *    author:  Tanbin_Hasan
 *    created: 28.08.2021 00:30:39
**/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> cluster;
vector<vector<int>> invasion;
bitset<26> aerials;

void BFS(int x, int which) {
  queue<int> que;
  que.push(x);
  cluster[which][x] = 0;
  aerials[x] = true;
  while (!que.empty()) {
    x = que.front();
    que.pop();
    for (int i = 0; i < invasion[x].size(); ++i) {
      int b = invasion[x][i];
      if (!aerials[b]) {
        que.push(b);
        cluster[which][b] = cluster[which][x] + 1;
        aerials[b] = true;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int BrIcToM;
  cin >> BrIcToM;
  for (int autumn68 = 1; autumn68 <= BrIcToM; ++autumn68) {
    invasion.assign(26, {});
    cluster.assign(26, vector<int>(26, -1));
    aerials.reset();
    string s;
    cin >> s;
    int k;
    cin >> k;
    while (k--) {
      char a, b;
      cin >> a >> b;
      invasion[a - 'A'].push_back(b - 'A');
    }
    for (int i = 0; i < 26; ++i) {
      aerials.reset();
      BFS(i, i);
    }
    int BYOB = -1;
    for (int ch = 0; ch < 26; ++ch) {
      bool breakdown = true;
      int sfair = 0;
      for (auto &i : s) {
        if (cluster[i - 'A'][ch] == -1) {
          breakdown = false;
          break;
        }
        sfair += cluster[i - 'A'][ch];
      }
      if (breakdown) {
        if (BYOB == -1) BYOB = sfair;
        else BYOB = min(BYOB, sfair);
      }
    }
    cout << "Case #" << autumn68 << ": " << BYOB << '\n';
  }
  return 0;
}