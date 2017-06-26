#include <bits/stdc++.h>
#define dd double
using namespace std;

void first(dd u, dd v, dd t);
void second(dd u, dd v, dd a);
void third(dd u, dd a, dd s);
void four(dd v, dd a, dd s);

int main(void)
{
    int n, i = 0;
    dd a, b, c;

    while(cin >> n){
        i++;
        if(n == 0)
            break;

        cin >> a >> b >> c;

        cout << "Case " << i << ": ";
        if(n == 1)
            first(a, b, c);
        else if(n == 2)
            second(a, b, c);
        else if(n == 3)
            third(a, b, c);
        else if(n == 4)
            four(a, b, c);
    }

    return 0;
}

void first(dd u, dd v, dd t)
{
    dd a = (v - u) / t;
    dd s = u * t + (0.5 * a * t * t);
    cout << fixed << setprecision(3) << s << " " << a << endl;
}
void second(dd u, dd v, dd a)
{
    dd s = (v * v - u * u) / (2 * a);
    dd t = (v - u) / a;
    cout << fixed << setprecision(3) << s << " " << t << endl;
}
void third(dd u, dd a, dd s)
{
    dd v = sqrt((u * u) + 2 * a * s);
    dd t = (v - u) / a;
    cout << fixed << setprecision(3) << v << " " << t << endl;
}
void four(dd v, dd a, dd s)
{
    dd u = sqrt((v * v) - (2.0 * a * s));
    dd t = (v - u) / a;
    cout << fixed << setprecision(3) << u << " " << t << endl;
}
