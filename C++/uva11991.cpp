#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, q;

	while(cin >> n >> q){
		map<int, vector<int> > m;
		for(int i = 0, a; i < n; i++){
			cin >> a;
			m[a].push_back(i);
		}

		for(int i = 0, a, b; i < q; i++){
			cin >> a >> b;
			
			if(!m.count(b) || m[b].size() < a)
				cout << 0 << endl;
			else
				cout << m[b][a - 1] + 1 << endl;
		}
	}

	return 0;
}
