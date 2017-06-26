#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;

    while(cin >> T){
        if(T == 0)
            break;

        int n, m;
        cin >> n >> m;

        int x, y;
        for(int i = 0; i < T; i++){
            cin >> x >> y;

            if(x == n || y == m)
                cout << "divisa" << endl;
            else if(x < n && y > m)
                cout << "NO" << endl;
            else if(x > n && y > m)
                cout << "NE" << endl;
            else if(x > n && y < m)
                cout << "SE" << endl;
            else
                cout << "SO" << endl;
        }
    }

    return 0;
}
