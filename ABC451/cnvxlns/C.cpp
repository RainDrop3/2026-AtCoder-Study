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

void init(){

}

void solve(){
    int Q;
    cin >> Q;
    multiset<int> ms;
    while(Q--){
        int q, h;
        cin >> q >> h;
        if(q == 1){
            ms.insert(h);
        }else{
            ms.erase(ms.begin(), ms.upper_bound(h));
        }
        cout << ms.size() << endl;
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
