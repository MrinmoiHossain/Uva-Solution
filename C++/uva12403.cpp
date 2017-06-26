#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    LL totalAmount = 0;
    for(int i = 0; i < T; i++){
        string s;
        int amount;
        cin >> s;
        if(s == "donate"){
            cin >> amount;
            totalAmount += amount;
        }
        else
            cout << totalAmount << endl;
    }

    return 0;
}
