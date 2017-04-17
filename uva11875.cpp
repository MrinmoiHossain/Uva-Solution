//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int n;

    for(int i = 1; i <= T; i++){
        cin >> n;
        vector<int>a(n);

        for(int j = 0; j < n; j++)
            cin >> a[j];

        sort(a.begin(), a.end());
        int pos = n / 2;
        cout << "Case " << i << ": " << a[pos] << endl;
    }

    return 0;
}
