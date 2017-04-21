#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;

    while(getline(cin, a)){
        if(a == "*")
            break;

        int len = a.length();
        char f;

        f = toupper(a[0]);//input first symbol

        int con = 0, let = 0;
        for(int i = 0; i < len; i++){
            if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
                con++;
                if(f == toupper(a[i]))
                    let++;
                while((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') && i < len) i++;
            }
        }

        if(con == let)
            cout << "Y" << endl;
        else
            cout << "N" << endl;

    }

    return 0;
}
