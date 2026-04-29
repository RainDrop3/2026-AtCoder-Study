#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> trees;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int Q;
    cin >> Q;
    while (Q--) {
        int q, h;
        cin >> q >> h;
        if (q == 1) {
            trees.push(h);
            cout << trees.size() << '\n';
        }
        else if (q == 2) {
            while (!trees.empty() && trees.top() <= h) {
                trees.pop();
            }
            cout << trees.size() << '\n';
        }
    }
}