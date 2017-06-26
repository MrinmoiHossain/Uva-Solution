#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int r, n;

    while(cin >> r >> n){
        vector<bool> a(r+1, 0);

        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            a[temp] = 1;
        }
        bool bl = true;
        for(int i = 1; i <= r; i++)
            if(!a[i]){
                cout << i << " ";
                bl = false;
            }

        if(bl)
            cout << "*";
        cout << endl;
    }

    return 0;
}
