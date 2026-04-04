#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M; cin >> N >> M;
  vector<pair<int, int>> cnt(M+1, {0, 0});
  for (int i=1 ; i<=N ; i++) {
    int a, b;
    cin >> a >> b;
    ++cnt[a].first;
    ++cnt[b].second;
  }

  for (int i=1 ; i<=M ; i++) {
    auto [a, b] = cnt[i];
    cout << b-a << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();
}