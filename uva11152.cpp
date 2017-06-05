#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define PI acos(-1.0)
using namespace std;

int main(void)
{
    int a, b, c;

    while(cin >> a >> b >> c){
        double s = (a + b + c) / 2.0;
        double triangle = sqrt(s * (s - a) * (s - b) * (s - c));
        double Sradius = triangle / s; //r * s = triangle ares
        double Asmall = PI * Sradius * Sradius;
        double R = (a * b * c * 1.0) / (4.0 * triangle);
        double BigCircle = PI * R * R;

        cout << fixed << setprecision(4) << BigCircle - triangle << " " << triangle - Asmall << " " << Asmall << endl;
    }

    return 0;
}
