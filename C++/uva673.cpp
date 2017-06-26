#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool balance(string s);
bool check(char a, char b);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 1; i <= T; i++){
        string s;
        getline(cin, s);

        if(balance(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

bool balance(string s)
{
    int len = s.length();
    if(len == 0)
        return true;

    stack<char> S;
    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            S.push(s[i]);
        else{
            if(S.empty() || !check(S.top(), s[i]))
                return false;
            else
                S.pop();
        }
    }

    return S.empty()? true : false;
}

bool check(char a, char b)
{
    if(a == '(' && b == ')') return true;
    else if(a == '{' && b == '}') return true;
    else if(a == '[' && b == ']') return true;
    return false;
}
