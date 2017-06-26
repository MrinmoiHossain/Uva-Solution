#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL rever(LL n);

int main(void)
{
    int T;
    cin >> T;

    LL n;
    for(int i = 1; i <= T; i++){
        cin >> n;
        int con = 0;

        while(n != rever(n)){
            n += rever(n);
            con++;
        }

        cout << con << " " << n << endl;
    }

    return 0;
}

LL rever(LL n)
{
    LL sum = 0;
    while(n){
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}
