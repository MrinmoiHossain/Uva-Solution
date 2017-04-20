#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(void)
{
    int n;
    cin >> n;

    int f;
    for(int i = 0; i < n; i++){
        cin >> f;

        LL con = 0, a, b, c;

        for(int j = 0; j < f; j++){
            cin >> a >> b >> c;
            con += (a * c);
        }

        cout << con << endl;
    }

    return 0;
}
