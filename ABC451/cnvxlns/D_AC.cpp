#include<bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using tiii = tuple<int, int, int>;
using vpii = vector<pii>;

const int inf = 4e18;
const int MOD = 1e9 + 9;

vpii drc = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

pii operator+(pii A, pii B){
    return {A.first + B.first, A.second + B.second};
}
pii operator-(pii A, pii B){
    return {A.first - B.first, A.second - B.second};
}

vector<string> pieces;
set<int> ans;

void dfs(string val){
    ans.insert(stoll(val));
    
    for(const auto &i: pieces){
        if(stoll(val + i) > 1e9){
            continue;
        }
        dfs(val + i);
    }
}

void init(){
    for(auto i = 1; i <= (1 << 29); i *= 2){
        if(i == 128){
            continue;
        }
        pieces.push_back(to_string(i));
    }
    for(auto i: pieces){
        dfs(i);
    }
}

void solve(){
    int N;
    cin >> N;
    int cnt = 0;
    
    for(auto i: ans){
        if(cnt == N - 1){
            cout << i << endl;
            return ;
        }
        cnt++;
    }
}

int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    init();
    
    int t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}