#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;

    while(cin >> n){
        vector<int>a(n);
        int m, p, q;

        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;

        sort(a.begin(), a.end());
        int dif = 111110;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i] + a[j] == m && abs((a[i] - a[j]) <= dif) && i != j){
                    p = min(a[i], a[j]);
                    q = max(a[i], a[j]);
                    dif = abs(a[i] - a[j]);
                }
            }
        }

        cout << "Peter should buy books whose prices are " << p << " and " << q << "." << endl;
        cout << endl;
    }

    return 0;
}
