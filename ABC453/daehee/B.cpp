#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T, X; cin >> T >> X;
  vector<int> arr(T+1);
  for (auto &i : arr) cin >> i;
  int saved = arr[0];
  cout << "0 " << saved << "\n";
  for (int i=1 ; i<=T ; i++) {
    if (abs(saved - arr[i]) >= X) {
      saved = arr[i];
      cout << i << " " << saved << "\n";
    }
  }
}