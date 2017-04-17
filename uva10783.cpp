//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int a, b;
    for(int i = 1; i <= T; i++){
        cin >> a;
        cin >> b;

        int l = ceil(b / 2.0), f = ceil(a / 2.0);

        cout << "Case " << i << ": ";
        if(a % 2 == 0)
            cout << l * l - f * f << endl;
        else
            cout << l * l - ((f - 1) * (f - 1)) << endl;
    }
    return 0;
}
