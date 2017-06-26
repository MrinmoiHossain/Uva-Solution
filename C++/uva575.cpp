#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL skew(string a);

int main(void)
{
    string a;

    while(cin >> a){
        if(a == "0")
            break;

        cout << skew(a) << endl;
    }
    return 0;
}

LL skew(string a)
{
    int len = a.length();
    LL sum = 0;
    for(int i = 0, j = len; i < len; i++, j--){
        sum += (a[i] - '0') * (pow(2, j) - 1);
    }
    return sum;
}
