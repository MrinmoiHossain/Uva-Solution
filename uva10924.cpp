//Accepted
#include <bits/stdc++.h>
using namespace std;

bool prime(int n);

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;

    while(cin >> a){
        int len = a.length(), sum = 0;

        for(int i = 0; i < len; i++){
            if(a[i] >= 'a' && a[i] <= 'z')
                sum += (a[i] - 96);
            else if(a[i] >= 'A' && a[i] <= 'Z')
                sum += (a[i] - 38);
        }
        if(prime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }

    return 0;
}

bool prime(int n)
{
    if(n < 1) return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
