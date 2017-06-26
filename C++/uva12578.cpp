//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double pi = acos(-1), r, area;
    int T, L;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> L;

        r = 0.04 * L * L * pi;

        area = L * 0.6 * L;

        cout << fixed << setprecision(2) << r << " " << area - r << endl;
    }

    return 0;
}
