//Accepted
#include <bits/stdc++.h>
using namespace std;

char grade(int a);

int main(void)
{
    int T;
    cin >> T;
    vector<int>a(7);

    for(int i = 1; i <= T; i++){
        int sum = 0;
        for(int j = 0; j < 7; j++)
            cin >> a[j];

        sort(a.begin()+4, a.end(), greater<int>());
        a[4] = (a[4] + a[5]) / 2;

        for(int j = 0; j < 5; j++)
            sum += a[j];

        cout << "Case " << i << ": " << grade(sum) << endl;
    }

    return 0;
}

char grade(int a)
{
    switch(a)
    {
        case 90 ... 100:
            return 'A';
        case 80 ... 89:
            return 'B';
        case 70 ... 79:
            return 'C';
        case 60 ... 69:
            return 'D';
        case 0 ... 59:
            return 'F';
    }
}
