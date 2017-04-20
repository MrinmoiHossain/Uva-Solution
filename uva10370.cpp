//Accepted
#include <bits/stdc++.h>
//#include <numeric> //use for accumulate
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T;
    cin >> T;

    int n;
    for(int i = 1; i <= T; i++){
        cin >> n;
        vector<int>a(n);

        for(int j = 0; j < n; j++)
            cin >> a[j];

        int avg = accumulate(a.begin(), a.end(), 0) / (a.size());
        int up = 0;
        for(int j = 0; j < a.size(); j++)
            if(a[j] > avg)
                up++;

        cout << fixed << setprecision(3) << (up * 100.0) / a.size() << "%" << endl;
    }

    return 0;
}
