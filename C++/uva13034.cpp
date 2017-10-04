#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		bool flag = true;

		for(int j = 0, x; j < 13; j++){
			cin >> x;

			if(!x)
				flag = false;
		}
		cout << "Set #" << i << ": " << (flag? "Yes" : "No") << endl;
	}

	return 0;
}
