#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> graph;
vector<vector<int>> board;
vector<vector<int>> costs;

struct node {
    int a;
    int b;
    int w;
};

struct Compare {
    bool operator()(const node& i, const node& j) {
        return i.w > j.w;
    }
};

priority_queue<node, vector<node>, Compare> pq;

vector<int> parent;

int find(int e) {
    if (parent[e] == e) return e;
    else {
        return parent[e] = find(parent[e]);
    }
}

int n;

void dfs(int start, int curr, int prev, int total_dist) {
    costs[start][curr] = total_dist;
    for (auto& [next_node, weight] : graph[curr]) {
        if (next_node != prev) {
            dfs(start, next_node, curr, total_dist + weight);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    board.assign(n + 1, vector<int>(n + 1));
    parent.assign(n + 1, 0);
    for(int i=1; i<=n; i++) parent[i] = i;
    graph.assign(n + 1, vector<pair<int, int>>());
    costs.assign(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cin >> board[i][j];
            pq.push({i, j, board[i][j]});
        }
    }

    int edges = 0;
    while(!pq.empty() && edges < n - 1) {
        auto [a, b, w] = pq.top(); pq.pop();
        if (find(a) != find(b)) {
            parent[find(a)] = find(b);
            graph[a].push_back({b, w});
            graph[b].push_back({a, w});
            edges++;
        }
    }

    if (edges != n -1) {
        cout << "No";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        dfs(i, i, -1, 0);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (costs[i][j] != board[i][j]) {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}