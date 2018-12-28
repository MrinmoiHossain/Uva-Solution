#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("te.txt", "w", stdout)
typedef long long int lln;
using namespace std;

int main(void)
{
    //read();
    //write();
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        lln low, high, v;
        cin >> low >> high;

        int mx = 0;
        for(lln j = low; j <= high; j++){
            int con = 0;
            double limit = sqrt(j);
            for(int k = 1; k <= limit; k++){
                if(j % k == 0){
                    con++;
                    if(k < limit)
                        con++;
                }
            }
            if(mx < con)
                mx = con, v = j;
        }

        cout << "Between " << low << " and " << high << ", " << v << " has a maximum of " << mx << " divisors." << endl;
    }

    return 0;
}
