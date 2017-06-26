#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1, n, m; tc <= T; tc++){
        cin >> n >> m;
        queue<pair<int, int> > q;
        priority_queue<int> pq;

        for(int i = 0, k; i < n; i++){
            cin >> k;
            q.push(make_pair(i, k));
            pq.push(k);
        }

        int ans = 0;
        while(!q.empty()){
            if(q.front().second == pq.top()){
                ans++;
                if(q.front().first == m)
                    break;

                q.pop();
                pq.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }

        cout << ans << endl;
    }

    return 0;
}
