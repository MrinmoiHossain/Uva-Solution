#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;
    set<string> out;
    while(getline(cin, s)){
        string p = "";

        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i]))
                p += tolower(s[i]);
            else
                p += " ";
        }

        stringstream ss(p);
        string k;
        while(ss >> k)
            out.insert(k);
    }
    set<string>::iterator it;
    for(it = out.begin(); it != out.end(); it++)
        cout << (*it) << endl;

    return 0;
}
