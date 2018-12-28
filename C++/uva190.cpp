#include <bits/stdc++.h>
using namespace std;

#define read() freopen("input.txt", "r", stdin)
#define write() freopen("te.txt", "w", stdout)

double a, b, c, d, e, f;

double output(double m, double n, double o, double p)
{
    return (m - n)*(c*c + d*d - a*a - b*b) + (o - p)*(a*a + b*b - e*e - f*f);
}

void FirstEquation(double h, double k, double r)
{
    if(h == 0)
        cout << "x^2 + ";
    else
        cout << fixed << setprecision(3) << "(x " << (h < 0? "- ":"+ ") << abs(h) << ")^2 + ";
    if(k == 0)
        cout << "y^2 = ";
    else
        cout << fixed << setprecision(3) << "(y " << (k < 0? "- ":"+ ") << abs(k) << ")^2 = ";
    if(r == 0)
        cout << fixed << setprecision(3) << r << endl;
    else
        cout << fixed << setprecision(3) << r << "^2" << endl;
}

void SecondEquation(double x, double y, double z)
{
    cout << "x^2 + y^2 ";
    if(x != 0)
        cout << fixed << setprecision(3) << (x < 0? "- ":"+ ") << abs(x) << "x ";
    if(y != 0)
        cout << fixed << setprecision(3) << (y < 0? "- ":"+ ") << abs(y) << "y ";
    cout << fixed << setprecision(3) << (z < 0? "+ ":"- ") << abs(z) << " = 0" << endl;
}

int main(void)
{
    //read();
    //write();

    while(cin >> a >> b >> c >> d >> e >> f){
        double y = ( output(a, e, a, c) ) / (b*c - f*c + a*f + e*d - b*e - a*d);
        double x = ( output(b, f, b, d) ) / (c*f - b*c - a*f + a*d - d*e + b*e);
        double z = a*a + b*b + a*x + b*y;


        double h = x / 2, k = y / 2, r = sqrt(h*h + k*k + z);
        FirstEquation(h, k, r);
        SecondEquation(x, y, z);
        cout << endl;
    }

    return 0;
}
