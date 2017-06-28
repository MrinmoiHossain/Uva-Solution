#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
	string s, r;
	int mx = 0;

	while(cin >> s){
		if(s == "E-N-D")
			break;

		int con = 0;
		string b;
		for(int i = 0; i < s.length(); i++){
			if(isalpha(s[i]) or s[i] == '-'){
				con++;
				if(isalpha(s[i]))
					s[i] = tolower(s[i]);
				b += s[i];
			}
		}

		if(mx < con){
			mx = con;
			r = b;
		}		
	}
	
	cout << r << endl;
	
	return 0;
}
