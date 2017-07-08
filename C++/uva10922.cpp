#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int Func(string s)
{
	int sum = 0;
	for(int i = 0; i < s.length(); i++)
		sum += s[i] - '0';
	return sum;
}

int su(int a)
{
	if(a < 10)
		return a;
	int b = 0;
	while(a){
		b += (a % 10);
		a /= 10;
	}
	return b;
}

int con(int a)
{
	int c = 0;
	while(a > 9){
		c++;
		a = su(a);
	}
	c++;

	return c;
}


int main(void)
{
	string s;
	
	while(cin >> s){
		if(s == "0")
			break;
		
		int sum = Func(s);
		if(sum % 9 == 0)
			cout << s << " is a multiple of 9 and has 9-degree " << con(sum) << "." << endl;
		else
			cout << s << " is not a multiple of 9." << endl;
	}


	return 0;
}
