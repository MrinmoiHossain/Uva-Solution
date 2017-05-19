#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int a, b;

    while(cin >> a >> b){
        cout << max(a, b) << endl;
    }

    return 0;
}
