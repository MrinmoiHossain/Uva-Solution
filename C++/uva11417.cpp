//Accepted
#include <bits/stdc++.h>
using namespace std;

int GCD(int n);
int gcd(int a, int b);

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;
        cout << GCD(n) << endl;;
    }

    return 0;
}

int GCD(int n)
{
    int G = 0;
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++)
            G += gcd(i, j);
    }

    return G;
}
int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
