#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	for(int i = 0, n; i < t; i++){
		cin >> n;

		int digit = 315 * n + 36962;

		cout << abs((digit / 10) % 10) << endl;
	}

	return 0;
}
