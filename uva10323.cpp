//Accepted
#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL factorial(int n);

int main(void)
{
    int n;

    while(cin >> n){
        if(n < 0 && n % 2 == 0)
            cout << "Underflow!" << endl;
        else if(n < 0 && n % 2 != 0)
            cout << "Overflow!" << endl;
        else if(n >= 0 && n < 8)
            cout << "Underflow!" << endl;
        else if(n >= 8 && n <= 13)
            cout << factorial(n) << endl;
        else
            cout << "Overflow!" << endl;
    }
    return 0;
}

LL factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
