#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define pb push_back
#define MAX 11000
using namespace std;

void seive();

vector<int>Prime;
bool status[MAX];


int main(void)
{
    //read();
    //write();
    seive();
    int n, c;

    while(cin >> n >> c){
        vector<int>a;
        vector<int>b;

        for(int i = 1; Prime[i] <= n; i++)
            a.pb(Prime[i]);

        int con = a.size();
        cout << n << " " << c << ": ";

        if(con == 1 || (c == 1 && con % 2 != 0)){
            int mid = con / 2;
            cout << a[mid];
        }
        else if(con % 2 == 0){
            int mid = con / 2;
            if(mid == 0)
                mid = 1;
            int lo = mid - c;
            int hi = mid + c;
            if(c > mid){
                lo = 0;
                hi = a.size();
            }
            for(int i = mid; i >= lo && i >= 0; i--)
                b.pb(a[i]);
            for(int i = mid + 1; i < hi; i++)
                b.pb(a[i]);
        }
        else if(con % 2 != 0){
            int mid = con / 2;
            if(mid == 0)
                mid = 1;
            int cn = ((2 * c) - 1) / 2;
            int lo = mid - cn;
            int hi = mid + 1 + cn;
            b.pb(a[mid+1]);
            for(int i = mid; i >= lo && i >= 0; i--)
                b.pb(a[i]);
            for(int i = mid + 2; i < hi && i < a.size(); i++)
                b.pb(a[i]);
        }

        sort(b.begin(), b.end());
        for(int i = 0; i < b.size(); i++){
            cout << b[i];
            if(i < b.size() - 1)
                cout << " ";
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}

void seive()
{
    int limit = sqrt(MAX);

    status[0] = 1;
    Prime.pb(0);
    Prime.pb(1);
    Prime.pb(2);

    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    for(int i = 3; i <= MAX; i += 2){
        if(!status[i]){
            Prime.pb(i);
            if(i <= limit){
                for(int j = i * i; j <= MAX; j += 2 * i)
                    status[j] = 1;
            }
        }
    }
}
