//Accepted
#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(void)
{
    LL a, b, c;
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> a >> b >> c;

        cout << "Case " << i << ": ";
        if(a + b > c && b + c > a && c + a > b){
            if(a == b && b == c)
                cout << "Equilateral" << endl;
            else if(a == b || b == c || c == a)
                cout << "Isosceles" << endl;
            else
                cout << "Scalene" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}
