#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;
		vector<int> v(n);
		for(int j = 0; j < n; j++)
			cin >> v[j];
		sort(v.begin(), v.end());
		
		int total = 0, mid = n/2;
		for(int j = 0; j < n; j++)
			if(j != mid)			
				total += abs(v[mid] - v[j]);

		cout << total << endl;
	}


	return 0;
}
