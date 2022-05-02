#include <bits/stdc++.h>

#define int long long

using namespace std;

string lb(vector<pair<int,string>> &vp, int n, int x) {
  string ans = "";
  int l = 0, r = n - 1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (vp[mid].first >= x) {
      ans = vp[mid].second;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}

// #define MultipleCase       
void Solve(int tc) {
  int n, m;
  cin >> n >> m;
  map<string,vector<pair<int,string>>> vp;
  map<string,int> val;
  for (int i = 0; i < n; ++i) {
    string name;
    cin >> name;
    val[name] = i;
    int x;
    cin >> x;
    while (x--) {
      string skill;
      cin >> skill;
      int y;
      cin >> y;
      vp[skill].push_back({y, name});
    }
  }
  for (auto &[x, y] : vp) {
    sort(y.begin(), y.end());
  }
  map<string,vector<string>> mp;
  map<string,vector<string>> store;
  vector<string> vss;
  int sz = 0;
  for (int i = 0; i < m; ++i) {
    string project;
    cin >> project;
    int g1, g2, g3;
    cin >> g1 >> g2 >> g3;
    int x;
    cin >> x;
    map<string,bool> vis;
    bool ok = true;
    while (x--) {
      string skill;
      cin >> skill;
      int y;
      cin >> y;
      auto &temp = vp[skill];
      int len = (int)temp.size();
      auto ans = lb(temp, len, y);
      if (vis[ans]) continue;
      if (ans == "") ok = false;
      if (vis[ans] == false) mp[project].push_back(ans);
      vis[ans] = true;
    }
    if (!ok) continue;
    vss.push_back(project);
    for (auto &y : mp[project]) {
      store[project].push_back(y);
    }
  }
  cout << (int)vss.size() << '\n';
  for (auto &[x, y] : store) {
    cout << x << '\n';
    for (auto &i : y) {
      cout << i << " ";
    }
    cout << '\n';
  }
}

signed main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1, tc = 0;
  #ifdef MultipleCase
  cin >> tt;      
  #endif
  while (tt--) Solve(++tc);
  return 0;
}