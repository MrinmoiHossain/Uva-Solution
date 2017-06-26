#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        int cd, cm, cy;
        int bd, bm, by;
        char ch;

        cin >> cd >> ch >> cm >> ch >> cy;
        cin >> bd >> ch >> bm >> ch >> by;

        int yd = cy - by;

        if(cm < bm)
            yd--;
        if(cm == bm){
            if(cd < bd)
                yd--;
        }

        cout << "Case #" << tc << ": ";
        if(yd < 0)
            cout << "Invalid birth date" << endl;
        else if(yd > 130)
            cout << "Check birth date" << endl;
        else
            cout << yd << endl;
    }

    return 0;
}
