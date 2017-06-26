//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;
        vector<int>a(n);

        for(int j = 0; j < n; j++)
            cin >> a[j];

        int hi = 0, lo = 0;
        for(int j = 0; j < n - 1; j++){
            if(a[j] < a[j + 1])
                hi++;
            else if(a[j] > a[j + 1])
                lo++;
        }
        cout << "Case " << i << ": " << hi << " " << lo << endl;
    }

    return 0;
}
