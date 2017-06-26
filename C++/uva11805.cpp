//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int n, k, p;
    for(int i = 1; i <= T; i++){
        cin >> n >> k >> p;
        int a = k + p;
        while(a > n)
            a -= n;

        cout << "Case " << i << ": " << a << endl;
    }

    return 0;
}
