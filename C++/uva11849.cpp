//Accepted
#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(void)
{
    LL m, n, i, x;
    map<LL, bool>a;

    while(cin >> m >> n){
        if(m == 0 && n == 0)
            break;
        LL con = 0;
        for(i = 0; i < m; i++){
            cin >> x;
            a[x] = 1;
        }

        for(i = 0; i < n; i++){
            cin >> x;
            if(a[x] == 1)
                con++;
        }

        a.clear();
        cout << con << endl;
    }

    return 0;
}
