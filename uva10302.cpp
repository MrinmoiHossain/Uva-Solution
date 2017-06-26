#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
typedef unsigned long long int ull;
using namespace std;

template<class T> inline T sqr(T a) { return a * a; }
int main(void)
{
    ull n;

    while(cin >> n)
        cout << sqr((n * (n + 1)) / 2) << endl;

    return 0;
}
