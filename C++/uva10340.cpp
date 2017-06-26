#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s, a;

    while(cin >> s >> a){
        int pos = 0, con = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = pos; j < a.length(); j++){
                if(s[i] == a[j]){
                    con++;
                    pos = j + 1;
                    break;
                }
            }
        }
        if(con == s.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
