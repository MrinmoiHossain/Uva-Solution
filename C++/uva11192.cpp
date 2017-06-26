#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            return 0;
        string s;
        cin >> s;

        int d = (s.size()) / n;

        for(int i = 0; i < s.size(); i += d)
            reverse(s.begin() + i, s.begin() + i + d);

        cout << s << endl;
    }

    return 0;
}
