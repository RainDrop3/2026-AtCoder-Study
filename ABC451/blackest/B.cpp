#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> result(M, 0);
    for(int i = 0; i < N; i++){
        int now, next;
        cin >> now >> next;
        result[now-1]--;
        result[next-1]++;
    }
    for(int i = 0; i < M; i++){
        cout << result[i] << "\n";
    }

    return 0;
}