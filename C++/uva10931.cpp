#include <bits/stdc++.h>
#define LL long long int
using namespace std;

void binary(LL n);

int main(void)
{
    LL n;

    while(cin >> n){
        if(n == 0)
            break;

        binary(n);
    }

    return 0;
}

void binary(LL n)
{
    vector<bool> s;
    int a, i = 0, con = 0;

    while(n){
        a = n % 2;
        n /= 2;
        s.push_back(a);
    }
    reverse(s.begin(), s.end());

    cout << "The parity of ";
    for(int i = 0; i < s.size(); i++){
        cout << s[i];
        if(s[i] == 1)
            con++;
    }
    cout << " is " << con << " (mod 2)." << endl;
}
