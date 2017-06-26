//Accepted
#include <bits/stdc++.h>
using namespace std;
#define LL long long int

void mod(string n);

int main(void)
{
    string a;

    while(cin >> a){
        if(a == "0")
            break;
        mod(a);
    }
    return 0;
}

void mod(string n)
{
    LL sum = 0, i;
    int len = n.length();

    for(i = 0; i < len; i++){
        sum = sum * 10 + (n[i] - '0');
        sum %= 17;
    }

    if(!sum)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
