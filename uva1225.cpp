#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 0; tc < T; tc++){
        int n;
        cin >> n;
        int arr[10] = {0};

        for(int i = 1; i <= n; i++){
            if(i <= 9)
                arr[i]++;
            else{
                int c = i;
                while(c){
                    arr[c % 10]++;
                    c /= 10;
                }
            }
        }

        for(int i = 0; i < 10; i++){
            cout << arr[i];
            if(i < 9)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
