#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool check(string s);
ll Pow(int a, int b);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    string s;
    for(int i = 0; i < T; i++){
        cin >> s;

        if(check(s))
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }

    return 0;
}

ll Pow(int a, int b)    /*In the pow() function it did not give the correct answer */
{
    ll c = 1;
    for(int i = 1; i <= b; i++)
        c *= a;

    return c;
}

bool check(string s)
{
    int len = s.length();
    ll sum = 0, val = 0;

    for(int i = 0; i < len; i++){
        int a = (s[i] - '0');
        sum += Pow(a, len);
        val = val * 10 + a;
    }

    if(sum == val)
        return 1;
    else
        return 0;
}
