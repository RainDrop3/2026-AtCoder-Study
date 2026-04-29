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
    int N, M;
    cin >> N >> M;
    vi A(N), B(N);
    vi members1(M + 1, 0), members2(M + 1, 0);
    for(auto i = 0; i < N; ++i){
        cin >> A[i] >> B[i];
        members1[A[i]]++;
        members2[B[i]]++;
    }
    for(auto i = 1; i <= M; ++i){
        cout << members2[i] - members1[i] << endl;
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
