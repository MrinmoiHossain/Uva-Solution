//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a;

    for(int i = 1; ; i++){
        cin >> a;

        if(a == "*")
            break;
        else if(a == "Hajj")
            cout << "Case " << i << ": " << "Hajj-e-Akbar" << endl;
        else if(a == "Umrah")
            cout << "Case " << i << ": " << "Hajj-e-Asghar" << endl;
    }

    return 0;
}
