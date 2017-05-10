#include <bits/stdc++.h>
using namespace std;

int change(char a);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 1; i <= T; i++){
        string s;
        getline(cin, s);

        int sum = 0;
        for(int j = 0; j < s.length(); j++)
            sum += change(s[j]);

        cout << "Case #" << i << ": " << sum << endl;
    }

    return 0;
}

int change(char a)
{
    switch(a)
    {
        case 'a':
        case 'd':
        case 'g':
        case 'j':
        case 'm':
        case 'p':
        case 't':
        case 'w':
        case ' ':
            return 1;
        case 'b':
        case 'e':
        case 'h':
        case 'k':
        case 'n':
        case 'q':
        case 'u':
        case 'x':
            return 2;
        case 'c':
        case 'f':
        case 'i':
        case 'l':
        case 'o':
        case 'r':
        case 'v':
        case 'y':
            return 3;
        case 's':
        case 'z':
            return 4;
        default:
            return 0;
    }
}
