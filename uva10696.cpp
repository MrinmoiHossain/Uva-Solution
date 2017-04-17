#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("ouput.txt", "w", stdout);
    int n;

    while(cin >> n){
        if(n == 0)
            break;
        if(n <= 101 && n != 0)
            cout << "f91(" << n << ") = 91" << endl;
        else
            cout << "f91(" << n << ") = " << n - 10 << endl;
    }

    return 0;
}
