#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> a(5);
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]){
		
		int con = 0;
		for(int i = 0, b; i < 5; i++){
			cin >> b;
			if(b != a[i])
				con++;
		}
		cout << (con == 5? "Y" : "N") << endl;
	}

	return 0;
}
