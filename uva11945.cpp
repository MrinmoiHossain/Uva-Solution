#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        double sum = 0.0, a;
        for(int i = 0; i < 12; i++){
            cin >> a;
            sum += a;
        }
        sum /= 12;
        cout << fixed << setprecision(2) << tc << " $";
        if(sum >= 1000.0){
            int b = (sum / 1000);
            cout << b << ",";
            double ex = sum - b * 1000.0;
            if(ex < 10.0)
                cout << "00";
            else if(ex > 10.0 and ex < 100.0)
                cout << "0";
            cout << ex << endl;
        }
        else
            cout << sum << endl;
    }

    return 0;
}
