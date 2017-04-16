//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int g, l;

    for(int i = 1; i <= T; i++){
        cin >> g >> l;

        if(l % g == 0)
            cout << g << " " << l << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}

