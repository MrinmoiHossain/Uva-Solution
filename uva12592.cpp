#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();

    vector< vector<string> > a(n);
    string temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            getline(cin, temp);
            a[i].push_back(temp);
        }
    }

    int m;
    cin >> m;
    cin.ignore();

    for(int i = 0; i < m; i++){
        getline(cin, temp);
        for(int j = 0; j < a.size(); j++){
            if(temp == a[j][0]){
                cout << a[j][1] << endl;
                break;
            }
        }
    }

    return 0;
}
