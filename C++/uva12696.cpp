#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	double v[] = {56, 45, 25};
	int tpass = 0;

	for(int i = 1; i <= T; i++){
		bool flag;
		double a[3], area = 0, weight;

		for(int j = 0; j < 3; j++){
			cin >> a[j];
			area += a[j];
		}
		(a[0] <= v[0] && a[1] <= v[1] && a[2] <= v[2]? flag = true : flag = false);

		cin >> weight;

		if((flag || area <= 125) && weight <= 7.0){
			cout << 1 << endl;
			tpass++;
		}
		else
			cout << 0 << endl;
	}
	cout << tpass << endl;

	return 0;
}
