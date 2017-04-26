#include <bits/stdc++.h>
using namespace std;

void update(string s, int n);

int main(void)
{
    int T;
    cin >> T;
    getchar();

    for(int i = 0; i < T; i++){
        string s;
        getline(cin, s);
        int len = s.length();
        int sq = sqrt(len);

        if(sq * sq != len)
            cout << "INVALID" << endl;
        else
            update(s, sq);
    }

    return 0;
}

void update(string s, int n)
{
    char a[n][n];
    int l = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            a[i][j] = s[l];
            l++;
        }


    for(int i = 0; i < n; i++)//col
        for(int j = 0; j < n; j++)//row
            cout << a[j][i];

    cout << endl;
}
