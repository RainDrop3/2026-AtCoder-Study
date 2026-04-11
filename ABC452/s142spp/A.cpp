#include <bits/stdc++.h>
using namespace std;

int main(void){
    int month[] = {1,3,5,7,9};
    int day[] = {7,3,5,7,9};

    int ans = 0;
    int m,d; cin >> m >> d;
    for(int i=0; i<5; i++){
        if(month[i]==m && day[i]==d) ans = 1;
    }
    if(ans) cout << "Yes";
    else cout << "No";
} 