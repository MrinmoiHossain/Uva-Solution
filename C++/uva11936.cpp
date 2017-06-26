//Accepted
#include <bits/stdc++.h>
using namespace std;

bool triangle(int a, int b, int c);

int main(void)
{
    int T;
    cin >> T;

    int a, b, c;
    for(int i = 1; i <= T; i++){
        cin >> a >> b >> c;

        if(triangle(a, b, c))
            cout << "OK" << endl;
        else
            cout << "Wrong!!" << endl;
    }

    return 0;
}

bool triangle(int a, int b, int c)
{
    if((a + b) > c && (b + c) > a && (c + a) > b)
        return 1;
    else
        return 0;
}
