//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T;
    cin >> T;

    int a, b;
    for(int i = 1; i <= T; i++){
        cin >> a >> b;

        cout << "Case " << i << ": ";
        if(b == 0)
            cout << fixed << setprecision(2) << a * 1.00 << endl;

        else{
            double init = 1.8 * a + 32;
            cout << fixed << setprecision(2) << ((5 * (init + b - 32)) / 9) << endl;
        }
    }

    return 0;
}
