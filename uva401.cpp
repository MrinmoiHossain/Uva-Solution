//Accepted
#include <bits/stdc++.h>
using namespace std;

bool mirror(string s);

int main(void)
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string a, b;

    while(cin >> a){
        b = a;
        reverse(a.begin(), a.end());

        if((a == b) && mirror(b))
            cout << b << " -- is a mirrored palindrome." << endl;
        else if((a == b) && (!mirror(b)))
            cout << b << " -- is a regular palindrome." << endl;
        else if((a != b) && mirror(b))
            cout << b << " -- is a mirrored string." << endl;
        else
            cout << b << " -- is not a palindrome." << endl;
        cout << endl;
    }
}


bool mirror(string a) {
    map<char, char> rev;
	rev['A'] = 'A';
	rev['H'] = 'H';
	rev['I'] = 'I';
	rev['E'] = '3';
	rev['J'] = 'L';
	rev['L'] = 'J';
	rev['M'] = 'M';
	rev['O'] = 'O';
	rev['T'] = 'T';
	rev['U'] = 'U';
	rev['V'] = 'V';
	rev['W'] = 'W';
	rev['X'] = 'X';
	rev['S'] = '2';
	rev['Y'] = 'Y';
	rev['Z'] = '5';
	rev['1'] = '1';
	rev['2'] = 'S';
	rev['3'] = 'E';
	rev['5'] = 'Z';
    rev['8'] = '8';
    for(int i = 0; i < a.length() / 2 + a.length() % 2; i++) {
        if(a[a.length() - 1 - i] != rev[a[i]])
            return false;
    }
    return true;
}
