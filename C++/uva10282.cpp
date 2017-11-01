#include <bits/stdc++.h>
using namespace std;

vector<string> deformation(string s)
{
	int len = s.length();
	vector<string> v(2);
	bool flag = true;

	for(int i = 0; i < len; i++){
		if(s[i] == ' ')
			flag = false;

		else if(flag)
			v[0] += s[i];
		else
			v[1] += s[i];
	}
	return v;
}

int main(void)
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);

	string s;

	vector<string> v(2);
	map<string, string> m;
	while(getline(cin, s) && s.length()){
		v = deformation(s);
		m[v[1]] = v[0];
	}
	
	while(cin >> s){
		if(m.count(s))
			cout << m[s] << endl;
		else
			cout << "eh" << endl;
	}
	m.clear();

	return 0;
}
