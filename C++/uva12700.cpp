#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;
        char ch;
        int ban = 0, world = 0, aban = 0, tie = 0;
        for(int j = 0; j < n; j++){
            cin >> ch;
            if(ch == 'B')
                ban++;
            else if(ch == 'W')
                world++;
            else if(ch == 'A')
                aban++;
            else if(ch == 'T')
                tie++;
        }

        cout << "Case " << i << ": ";
        if(aban == n)
            cout << "ABANDONED";
        else if(ban + aban == n)
            cout << "BANGLAWASH";
        else if(world + aban == n)
            cout << "WHITEWASH";
        else if(ban > world)
            cout << "BANGLADESH " << ban << " - " << world;
        else if(world > ban)
            cout << "WWW " << world << " - " << ban;
        else if(ban == world && !tie)
            cout << "DRAW " << ban << " " << tie;
        else if(tie)
            cout << "DRAW " << ban << " " << tie;


        cout << endl;
    }

    return 0;
}
