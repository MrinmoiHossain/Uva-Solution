#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

char decode(char s);

int main(void)
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;

    while(getline(cin, s)){
        for(int i = 0; i < s.length(); i++)
            cout << decode(tolower(s[i]));

        cout << endl;
    }



    return 0;
}

char decode(char s)
{
    switch(s)
    {
        case '/':
            return ',';
        case '.':
            return 'm';
        case ',':
            return 'n';
        case 'm':
            return 'b';
        case 'n':
            return 'v';
        case 'b':
            return 'c';
        case 'v':
            return 'x';
        case 'c':
            return 'z';
        case '\'':
            return 'l';
        case ';':
            return 'k';
        case 'l':
            return 'j';
        case 'k':
            return 'h';
        case 'j':
            return 'g';
        case 'h':
            return 'f';
        case 'g':
            return 'd';
        case 'f':
            return 's';
        case 'd':
            return 'a';
        case '\\':
            return '[';
        case ']':
            return 'p';
        case '[':
            return 'o';
        case 'p':
            return 'i';
        case 'o':
            return 'u';
        case 'i':
            return 'y';
        case 'u':
            return 't';
        case 'y':
            return 'r';
        case 't':
            return 'e';
        case 'r':
            return 'w';
        case 'e':
            return 'q';
        case ' ':
            return ' ';
    }
}
