//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int l, w, h;
    for(int i = 1; i <= T; i++){
        cin >> l >> w >> h;

        cout << "Case " << i << ": ";
        if(l <= 20 && w <= 20 && h <= 20)
            cout << "good" << endl;
        else
            cout << "bad" << endl;
    }

    return 0;
}
