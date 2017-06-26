#include <bits/stdc++.h>
#define pb push_back
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define MAX 10000000
using namespace std;

vector<double> v;
void digit();

int main(void)
{
    digit();

    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n;
        cin >> n;

        cout << fixed << setprecision(0) << floor(v[n]) << endl;
    }

    return 0;
}

void digit()
{
    v.pb(0.0);
    v.pb(1.0);

    for(int i = 2; i <= MAX; i++)
        v.pb(v[i - 1] + log10(i));
}
