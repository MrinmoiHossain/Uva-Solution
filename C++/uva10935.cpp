#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n;

	while(cin >> n && n){
		queue<int> q;
		for(int i = 1; i <= n; i++)
			q.push(i);

		cout << "Discarded cards:";
		while(q.size() > 1){
			cout << " " << q.front();
			q.pop();
			
			int temp = q.front();
			q.pop();
			if(!q.empty())
				cout << ",";

			q.push(temp);
		}
		cout << endl;
		cout << "Remaining card: " << q.front() << endl;
		q.pop();
	}

	return 0;
}
