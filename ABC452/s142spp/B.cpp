#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h, w; cin >> h >> w;
    for(int r=0; r<h; r++){
        for(int c=0; c<w; c++){
            if(r==0||r==(h-1)||c==0||c==(w-1)) cout << '#';
            else cout << '.';
        }
        cout << "\n";
    }
} 