#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;
    if(input.size()%5==0) cout << "Yes";
    else cout << "No";
    return 0;
}