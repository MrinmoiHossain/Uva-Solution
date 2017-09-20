#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double n, p;

	while(cin >> n >> p)
		cout << fixed << setprecision(0) << pow(p, 1.0/n) << endl;

	return 0;
}
