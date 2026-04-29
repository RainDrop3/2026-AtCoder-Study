#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q, size = 0;
    cin >> q;
    priority_queue<long, vector<long>, greater<long>> pq;
    for(int i=0;i<q;++i){
        int cmd;
        long h;
        cin >> cmd >> h;
        if(cmd==1){
            pq.push(h);
            size++;
            cout << size << '\n';
        }else{
            if(pq.empty()) cout << 0 << '\n';
            else{
                while(!pq.empty()){
                    long cur = pq.top();
                    //cout << cur << '\n';
                    if(cur>h) break;
                    pq.pop();
                    size--;
                }
                cout << size << '\n';
            }
        }
    }
    return 0;
}