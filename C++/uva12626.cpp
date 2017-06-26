//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a;
    map<char, int>m;
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> a;
        int len = a.length();
        for(int j = 0; j < len; j++){
            if(!m.count(a[j])){
                if(a[j] == 'M' || a[j] == 'A' || a[j] == 'R' || a[j] == 'G' || a[j] == 'I' || a[j] == 'T')
                    m[a[j]] = 1;
            }
            else
                if(a[j] == 'M' || a[j] == 'A' || a[j] == 'R' || a[j] == 'G' || a[j] == 'I' || a[j] == 'T')
                    m[a[j]]++;
        }
        int con = 0;
        while(true){
            if(m['M'] >= 1 && m['A'] >= 3 && m['R'] >= 2 && m['G'] >= 1 && m['I'] >= 1 && m['T'] >= 1){
                m['M'] -= 1;
                m['A'] -= 3;
                m['R'] -= 2;
                m['G'] -= 1;
                m['I'] -= 1;
                m['T'] -= 1;
                con++;
            }
            else
                break;

        }
        m.clear();
        cout << con << endl;
    }

    return 0;
}
