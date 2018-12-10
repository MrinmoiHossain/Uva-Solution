#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
    //read();
    int n, t = 0;

    while(cin >> n){
        vector<string> v;
        map<string, int> m;
        string s;
        for(int i = 0; i < n; i++){
            cin >> s;
            v.push_back(s);
            m[s] = 0;
        }


        for(int i = 0, q, value; i < n; i++){
            cin >> s >> value >> q;
            if(!q)
                continue;
            int temp = value / q;
            m[s] -= temp * q;

            for(int j = 0; j < q; j++){
                cin >> s;
                m[s] += temp;
            }
        }

        if(t++)
            cout << endl;
        for(int i = 0; i < n; i++)
            cout << v[i] << " " << m[v[i]] << endl;

        m.clear();
    }

    return 0;
}
