#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    
    int inst, h;
    multiset<int> ms;
    while(q--){
        cin >> inst >> h;
        if(inst == 1)
            ms.insert(h);
        else{
            auto border = ms.upper_bound(h);    
            ms.erase(ms.begin(), border);
        }
        cout << ms.size() << '\n';
    }
}