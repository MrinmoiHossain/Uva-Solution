#include <bits/stdc++.h>
using namespace std;
#define LL long long int

void ternary(LL n);

int main(void)
{
    LL a;

    while(cin >> a){
        if(a < 0)
            break;
        else if(a == 0)
            cout << 0 << endl;
        else
            ternary(a);
    }

    return 0;
}

void ternary(LL a)
{
    vector<int>sum;
    while(a){
        sum.push_back(a % 3);
        a /= 3;
    }
    reverse(sum.begin(), sum.end());

    for(int j = 0; j < sum.size(); j++)
        cout << sum[j];

    cout << endl;
}
