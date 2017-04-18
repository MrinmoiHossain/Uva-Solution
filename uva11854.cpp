#include <bits/stdc++.h>
using namespace std;

bool triangle(int a, int b, int c);

int main(void)
{
    int a, b, c;

    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0)
            break;
        else if(triangle(a, b, c))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}

bool triangle(int a, int b, int c)
{
    if(a * a + b * b == c * c)
        return 1;
    else if(b * b + c * c == a * a)
        return 1;
    else if(c * c + a * a == b * b)
        return 1;
    return 0;
}
