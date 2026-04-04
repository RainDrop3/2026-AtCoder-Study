#include <bits/stdc++.h>

#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  priority_queue<int, vector<int>, greater<>> pq;
  int q;
  cin >> q;
  while (q--) {
    int op, h;
    cin >> op >> h;
    if (op == 1) {
      pq.push(h);
    } else {
      while (!pq.empty() && pq.top() <= h) pq.pop();
    }
    cout << pq.size() << '\n';
  }
}