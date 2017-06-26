#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(void)
{
    LL n;

    while(cin >> n)
        cout << ((n * (n + 2)) / 2) * 3 - 6 << endl;

    return 0;
}
