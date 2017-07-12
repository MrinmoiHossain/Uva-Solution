#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	string s;
	for(int i = 0; i < T; i++){
		getline(cin, s);
	
		vector<int> v(26, 0);
		for(int j = 0; j < s.length(); j++)
			if(isalpha(s[j]))
				v[tolower(s[j]) - 'a']++;

		int mx = 0;
		for(int j = 0; j < 26; j++)
			mx = max(mx, v[j]);
		
		string s = "";
		for(int j = 0; j < 26; j++)
			if(mx == v[j])
				s += (j + 'a');

		cout << s << endl;
	}

	return 0;
}
