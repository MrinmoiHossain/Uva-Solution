#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double a, b, c;

	while(cin >> a >> b >> c){
		double s = (a + b + c) / 2.0;

		double area = (4 * sqrt(s * (s - a) * (s - b) * (s - c))) / 3.0;

		if(area > 0)
			cout << fixed << setprecision(3) << area << endl;
		else
			cout << "-1.000" << endl;
	}

	return 0;
}
