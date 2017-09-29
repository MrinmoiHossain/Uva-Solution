#include <bits/stdc++.h>
#define mx 11000007
using namespace std;

bool status[mx];
vector<int> Prime;
void seive()
{
	int limit = sqrt(mx);
	status[0] = status[1] = 1;

	for(int i = 4; i <= mx; i += 2)
		status[i] = 1;
	Prime.push_back(2);

	for(int i = 3; i <= mx; i += 2){
		if(!status[i]){
			Prime.push_back(i);
			if(i <= limit){
				for(int j = i * i; j <= mx; j += i + i)
					status[j] = 1;
			}
		}
	}
}

int main(void)
{
	seive();
	int n;

	while(cin >> n){

		if(n < 8){
			cout << "Impossible." << endl;
			continue;
		}
		else if(n & 1){
			cout << "2 3 ";
			n -= 5;
		}
		else{
			cout << "2 2 ";
			n -= 4;
		}

		bool flag = 0;
		for(int i = 0; Prime[i] <= n; i++){
			for(int j = 0; Prime[j] <= n; j++){
				if(Prime[i] + Prime[j] == n){
					cout << Prime[i] << " " << Prime[j] << endl;
					flag = 1;
					break;
				}
			}
			if(flag)
				break;
		}
	}

	return 0;
}
