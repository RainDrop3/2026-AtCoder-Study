#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m; cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for(int i=0; i<n;  i++){
        cin >> A[i] >> B[i];
        B[i]--;
    }
    cin >> m;
    vector<set<char>> v(11);
    vector<string> ans;
    for(int i=0; i<m; i++){
        string s; cin >> s;
        for(int j=0; j<n; j++){
            if(s.size()==A[j]) v[j].insert(s[B[j]]);
        }
        ans.push_back(s);
    }
    for(auto s : ans){
        bool bad = false;
        if(s.size()!=n) bad=true; // 이거때매 틀림;
        for(int i=0; i<s.size(); i++){
            if(v[i].find(s[i])==v[i].end()) {
                bad = true; break;
            }
        }
        if(bad) cout <<"No";
        else cout << "Yes";
        cout << "\n";
    }

    return 0;
} 