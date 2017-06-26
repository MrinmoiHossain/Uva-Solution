#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;


    while(cin >> s){
        if(s[0] == '-')
            break;

        bool bl = false;
        if(s[1] == 'x')
            bl = true;

        if(bl){
            int x;
            std::stringstream ss;
            ss << std::hex << s;
            ss >> x;
            cout << x << endl;
        }
        else{
            int d = atoi(s.c_str());
            printf("0x%X\n", d);
        }
    }

    return 0;
}
