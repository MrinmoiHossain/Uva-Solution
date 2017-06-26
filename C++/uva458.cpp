//Accepted
#include <bits/stdc++.h>
using namespace std;

void decode(string a);

int main(void)
{
    string a;

    while(getline(cin, a)){
        decode(a);
    }

    return 0;
}

void decode(string a)
{
    int len = a.length();

    for(int i = 0; i < len; i++){
        a[i] = a[i] - 7;
    }

    cout << a << endl;
}
