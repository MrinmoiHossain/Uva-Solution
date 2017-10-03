#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n){
		int con = 0;

		for(int i = 0, a; i < 5; i++){
			cin >> a;
			if(a == n)con++;
		}

		cout << con << endl;
	}

	return 0;
}
