//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    double r, radius, pi = 2 * acos(0.0);

    while(cin >> r >> n){
        radius = sin(2 * pi/ n);
        printf("%.3lf\n", (n * r * r * radius) / 2.0);
    }

    return 0;
}
