#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int digit(ll n)
{
	int sum = 0;
	if(n <= 9)
		return n;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return digit(sum);
}

int main(void)
{
	ll n;

	while(cin >> n){
		if(n == 0)
			break;
		cout << digit(n) << endl;
	}

	return 0;
}
