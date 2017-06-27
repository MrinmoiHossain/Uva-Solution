#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool year(string s, int n);

int main(void)
{
    string s;
    bool p = false;
    while(cin >> s){
        bool b = 0, h = 0;
        if(p)
            cout << endl;

        if((year(s, 4) and !year(s, 100)) or year(s, 400)){
            cout << "This is leap year." << endl;
            b = 1;
        }
        if(year(s, 15)){
            cout << "This is huluculu festival year." << endl;
            h = 1;
        }
        if(year(s, 55) and b)
            cout << "This is bulukulu festival year." << endl;
        if(!b and !h)
            cout << "This is an ordinary year." << endl;

        p = true;
    }

    return 0;
}

bool year(string s, int n)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum = sum * 10 + (s[i] - '0');
        sum %= n;
    }

    return (sum == 0? 1 : 0);
}
