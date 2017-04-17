//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int>a(10);
    vector<bool>c(N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 10; j++){
            cin >> a[j];
        }
        int pcon = 0, ncon = 0;
        for(int j = 1; j < 10; j++){
            if(a[j] - a[j - 1] >= 0)
                pcon++;
            if(a[j] - a[j - 1] < 0)
                ncon++;
        }
        if(pcon == 9 || ncon == 9)
            c[i] = 1;
        else
            c[i] = 0;
    }
    cout << "Lumberjacks:" << endl;
    for(int i = 0; i < N; i++)
        if(c[i])
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;

    return 0;
}
