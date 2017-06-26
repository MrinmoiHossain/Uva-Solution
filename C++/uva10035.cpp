//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int a, b;

    while(cin >> a >> b){
        if(a == 0 && b == 0)
            break;

        int c = 0, con = 0;

        while(a || b){
            c = (a % 10 + b % 10 + c) / 10;
            a /= 10;
            b /= 10;
            con += c;
        }
        if(!con)
            cout << "No carry operation." << endl;
        else if(con == 1)
            cout << con << " carry operation." << endl;
        else
            cout << con << " carry operations." << endl;
    }

    return 0;
}
