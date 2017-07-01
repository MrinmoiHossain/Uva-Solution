#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;

		ll a = (((n * 567) / 9) + 7492) * 235;
		a /= 47;
		a -= 498;

		int p = abs(a % 100);
		int q = p % 10;

		cout << (p - q) / 10 << endl;
	}

	return 0;
}
