#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	for(int i = 1, c, d; i <= t; i++){
		cin >> c >> d;

		double f = (9.0 * c) / 5.0 + 32;
		f += d;
		double ResC = ((f - 32) * 5.0) / 9.0;

		cout << fixed << setprecision(2) << "Case " << i << ": " << ResC << endl;
	}

	return 0;
}
