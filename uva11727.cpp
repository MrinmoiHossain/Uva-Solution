#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        vector<int>a(3);
        for(int j = 0; j < 3; j++)
            cin >> a[j];
        sort(a.begin(), a.end());

        cout << "Case " << i << ": " << a[1] << endl;
    }

    return 0;
}
