#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, tc = 0;
	
	while(cin >> t){
		if(t == 0)
			break;
		int pos = 0, neg = 0;
		for(int i = 0, a; i < t; i++){
			cin >> a;
			a? pos++ : neg++;
		}

		cout << "Case " << ++tc << ": " << pos - neg << endl;
	}

	return 0;
}
