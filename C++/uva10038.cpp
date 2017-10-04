#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

	while(cin >> n){
		bool flag = false;
		vector<int> v(n), dif(n - 1);
		for(int i = 0; i < n; i++)
			cin >> v[i];

		for(int i = 0; i < n - 1; i++)
			dif[i] = abs(v[i + 1] - v[i]);
		sort(dif.begin(), dif.end());

		for(int i = 0, j = 1; i < n - 1; i++, j++){
			if(j != dif[i]){
				flag = true;
				break;
			}
		}

		if(flag)
			cout << "Not jolly" << endl;
		else
			cout << "Jolly" << endl;
	}

   return 0;
}
