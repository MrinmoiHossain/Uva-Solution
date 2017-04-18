#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int>a;
    map<int, int>b;
    int c;

    while(cin >> c){
        if(!b.count(c)){
            b[c] = 1;
            a.push_back(c);
        }
        else
            b[c]++;
    }

    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " " << b[a[i]] << endl;

    return 0;
}
