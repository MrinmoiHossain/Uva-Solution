//Accepted
#include <bits/stdc++.h>
using namespace std;

int functionM(int n);

int main(void)
{
    int a, b;

    while(cin >> a >> b){
        cout << a << " " << b << " ";
        int m = max(a, b);
        int n = min(a, b);
        int res = 0;
        for(int i = n; i <= m; i++){
            if(functionM(i) > res)
                res = functionM(i);
        }
        cout << res << endl;
    }

    return 0;
}

int functionM(int n)
{
    int con = 1;
    while(n != 1){
        if(n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        con++;
    }

    return con;
}
