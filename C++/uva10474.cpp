//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, pos = 1;


    while(cin >> m >> n){
        if(m == 0 && n == 0)
            break;
        vector<int> x(m);
        vector<int> a(n);
        for(int i = 0; i < m; i++)
            cin >> x[i];

        sort(x.begin(), x.end());
        for(int i = 0; i < n; i++)
                cin >> a[i];

        cout << "CASE# " << pos << ":" << endl;
        bool c = true;
        for(int i = 0; i < n; i++){
            c = true;
            for(int j = 0; j < m; j++)
                if(a[i] == x[j]){
                    cout << a[i] << " found at " << j + 1 << endl;
                    c = false;
                    break;
                }
            if(c)
                cout << a[i] << " not found" << endl;
        }
        pos++;
    }
}
