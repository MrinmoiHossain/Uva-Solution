#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, tc = 1;

    while(cin >> n){
        if(n < 0)
            break;

        vector<int> a(12);
        vector<int> b(12);
        for(int i = 0; i < 12; i++)
            cin >> a[i];
        for(int i = 0; i < 12; i++)
            cin >> b[i];


        cout << "Case " << tc++ << ":" << endl;
        for(int i = 0; i < 12; i++){
            if(b[i] > n)
                cout << "No problem. :(" << endl;
            else{
                cout << "No problem! :D" << endl;
                n -= b[i];
            }
            n += a[i];
        }
    }

    return 0;
}
