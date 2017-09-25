#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;
	
		vector<int> a;

		for(int j = 2; a.size() <= 4; j++){
			if(n % j == 0){
				a.push_back(j);
				a.push_back(n / j);
			}
		}

		cout << "Case #" << i << ": " << n << " = " << a[0] << " * " << a[1] << " = " << a[2] << " * " << a[3] << endl;
	}

	return 0;
}
