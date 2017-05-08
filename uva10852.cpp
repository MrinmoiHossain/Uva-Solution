#include <bits/stdc++.h>
#define MAX 11000
#define pb push_back
#define read() freopen("intput.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

vector<int>Prime;
bool status[MAX];

void seive();

int main(void)
{
    seive();
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        int ans = 0, p = 0;
        for(int i = 0; Prime[i] <= n; i++){
            if(p < n % Prime[i]){
                p = n % Prime[i];
                ans = Prime[i];
            }
        }

        cout << ans << endl;
    }
}

void seive()
{
    int limit = sqrt(MAX * 1.0);

    status[0] = 1;
    status[1] = 1;
    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    Prime.pb(2);

    for(int i = 3; i <= MAX; i += 2){
        if(!status[i]){
            Prime.pb(i);
            if(i <= limit){
                for(int j = i * i; j <= MAX; j += i * 2)
                    status[j] = 1;
            }
        }
    }
}
