#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int n;

	while(cin >> n){
		n = (n * (n + 1)) / 2;

		cout << n * n << endl;
	}

	return 0;
}
