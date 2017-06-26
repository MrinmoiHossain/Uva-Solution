#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

string add(string a, string b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string s = add(a, b);
        int pos;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '0')
                continue;
            else{
                pos = j;
                break;
            }
        }

        for(int j = pos; j < s.length(); j++)
            cout << s[j];
        cout << endl;
    }

    return 0;
}

string add(string a, string b)
{
    string s;
    if(a.length() < b.length())
        swap(a, b);


    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    int c = 0;
    for(int i = 0; i < a.length(); i++){
        int add = (a[i] - '0') + (b[i] - '0') + c;
        c = add / 10;
        s += (add % 10) + '0';
    }
    if(c > 0)
        s += (c % 10) + '0';


    return s;
}
