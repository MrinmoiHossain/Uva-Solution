#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, r; i <= T; i++){
		cin >> r;
 		double a = r / 0.2;
		double b = (a * 0.6) / 2;
		int l = a;
		int w = b;

		int x = l * 0.45;
		int y = l * 0.55;
		cout << "Case " << i << ":" << endl;
		cout << -x << " " << w << endl;
		cout << y << " " << w << endl;
		cout << y << " " << -w << endl;
		cout << -x << " " << -w << endl;
	}

	return 0;
}
