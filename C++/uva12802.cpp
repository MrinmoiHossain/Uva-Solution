#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
	if(n < 2) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

long long int pal(long long int n)
{
	long long int temp = 0, s = 0;
	while(n){
		temp = (n % 10);
		s = s * 10 + temp;
		n /= 10;
	}

	return s;
}

int main(void)
{
	long long int n;
	
	while(cin >> n){
		cout << n + n << endl;
		
		if(isPrime(n) && pal(n) == n)
			break;
	}
		

	return 0;
}
