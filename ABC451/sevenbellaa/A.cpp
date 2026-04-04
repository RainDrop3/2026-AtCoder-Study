#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  if (s.length() % 5)
    cout << "No";
  else
    cout << "Yes";
}