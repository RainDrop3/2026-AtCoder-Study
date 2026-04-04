#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> a, b;
    for(int i=0; i<n; ++i){
        int aa, bb;
        cin >> aa >> bb;
        a.insert(aa);
        b.insert(bb);
    }

    for(int i=1; i<=m; ++i){
        cout << (int)b.count(i) - (int)a.count(i) << '\n';
    }
}