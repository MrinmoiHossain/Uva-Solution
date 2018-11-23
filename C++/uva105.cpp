#include <bits/stdc++.h>
using namespace std;

#define read()  freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)

int out[10001];

int main(void)
{
    //read();
    //write();
    int a, b, c, high = 0;

    while(cin >> a >> b >> c){
        for(int i = a; i < c; i++){
            if(out[i] < b)
                out[i] = b;
            if(high < c)
                high = c;
        }
    }

    int prev = 0;
    for(int i = 0; i < high; i++){
        if(prev != out[i]){
            cout << i << " " << out[i] << " ";
            prev = out[i];
        }
    }
    cout << high << " " << out[high] << endl;

    return 0;
}
