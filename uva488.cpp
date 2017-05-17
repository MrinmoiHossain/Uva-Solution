#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        int a, b;
        cin >> a;
        cin >> b;

        for(int i = 1; i <= b; i++){
            for(int j = 1; j <= a; j++){
                for(int k = 1; k <= j; k++)
                    cout << j;
                cout << endl;
            }
            for(int j = a - 1; j >= 1; j--){
                for(int k = j; k >= 1; k--)
                    cout << j;
                cout << endl;
            }
            if(i != b)
                cout << endl;
        }
        if(tc < T)
            cout << endl;
    }
}
