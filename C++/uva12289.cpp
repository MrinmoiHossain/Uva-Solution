//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    string a;

    for(int i = 1; i <= T; i++){
        cin >> a;
        int len = a.length();
        if(len == 3){
            if((a[0] == 'o' && a[1] == 'n') || (a[1] == 'n' && a[2] == 'e') || (a[2] == 'e' && a[0] == 'o'))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if(len == 5)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}
