#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main() {
    string S;
    cin >> S;
    int len = S.size();
    if(len % 5 == 0){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }

    return 0;
}