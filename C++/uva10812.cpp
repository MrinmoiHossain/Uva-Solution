#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, a, b; i < T; i++){
		cin >> a >> b;
		
		if(a >= b && (a + b) % 2 == 0)
			cout << (a + b) / 2 << " " << (a - b) / 2 << endl;
		else
			cout << "impossible" << endl;
	}

	return 0;
}
