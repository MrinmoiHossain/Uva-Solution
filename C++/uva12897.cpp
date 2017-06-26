//Accepted
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int T;

    cin >> T;

    for(int i = 0; i < T; i++){
        char ch[1048576], a, b, arr[100];
        cin >> ch;

        int R;
        cin >> R;

        for(int k = 65; k <= 95; k++)
            arr[k] = k;

        for(int j = 0; j < R; j++){
            cin >> a >> b;
            for(int m = 'A'; m <= 'Z'; m++){
                if(arr[m] == b)
                    arr[m] = a;
            }
        }
        for(int l = 0; ch[l]; l++)
            cout << arr[ch[l]];
        cout << endl;
    }

    return 0;
}
