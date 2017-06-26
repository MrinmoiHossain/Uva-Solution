#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define MAX 1100002
using namespace std;

bool status[MAX];
void seive();

int main(void)
{
    seive();
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        bool flag = 0;
        int a, b;
        for(int i = 3; i <= n; i++){
            int last = n - i;

            if(!status[last]){
                if(!status[i]){
                    flag = 1;
                    a = i;
                    b = last;
                    break;
                }
            }
        }

        if(flag)
            cout << n << " = " << a << " + " << b << endl;
        else
            cout << "Goldbach's conjecture is wrong." << endl;
    }
    return 0;
}

void seive()
{
    int limit = sqrt(MAX);

    status[0] = 1;
    status[1] = 1;

    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    for(int i = 3; i <= MAX; i += 2){
        if(!status[i]){
            if(i <= limit){
                for(int j = i * i; j <= MAX; j += 2 * i)
                    status[j] = 1;
            }
        }
    }
}
