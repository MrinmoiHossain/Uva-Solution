//Accepted
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.141592653589793

int main(void)
{
    double x1, x2, x3, y1, y2, y3;

    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
        double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

        double s = 0.5 * fabs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1);

        double r = (a * b * c) / (4 * s);

        cout << fixed << setprecision(2) << 2 * PI * r << endl;
    }

    return 0;
}
