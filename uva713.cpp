#include <bits/stdc++.h>
#define Reverse(s) reverse(s.begin(), s.end())
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


        string s = add(a, b);
        int pos;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '0')
                continue;
            else{
                pos = j;
                break;
            }
        }

        for(int j = pos; j < s.size(); j++)
            cout << s[j];
        cout << endl;
    }

    return 0;
}

string add(string a, string b)
{
    if(a.length() < b.length())
        swap(a, b);

    for(int i = b.length(); i < a.length(); i++)
        b += "0";
    int sum = 0, ex = 0;
    string s;
    for(int i = 0; i < a.length(); i++){
        sum = (a[i] - '0') + (b[i] - '0') + ex;
        ex = sum / 10;
        s += (sum % 10) + '0';
    }
    if(ex > 0)
        s += (ex % 10) + '0';

    return s;
}
