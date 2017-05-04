#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

bool status[MAX];
void seive();
int rev(int n);

int main(void)
{
    seive();
    int n;

    while(cin >> n){
        int Nn = rev(n);

        if(status[n])
            cout << n << " is not prime." << endl;
        else if(!status[n] && !status[Nn] && n != Nn)
            cout << n << " is emirp." << endl;
        else
            cout << n << " is prime." << endl;
    }

    return 0;
}

void seive()
{
    int limit = sqrt(MAX * 1.0);

    status[0] = 1;
    status[1] = 1;
    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    for(int i = 3; i <= limit; i += 2){
        if(status[i] == 0){
            for(int j = i * i; j <= MAX; j += i * 2) status[j] = 1;
        }
    }
}

int rev(int n)
{
    int sum = 0;
    while(n){
        sum = sum * 10 + (n % 10);
        n /= 10;
    }

    return sum;
}
