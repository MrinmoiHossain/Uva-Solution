//Accepted
#include <bits/stdc++.h>
using namespace std;

string country(string a);

int main(void)
{
    string a;

    for(int i = 1; ; i++){
        cin >> a;
        if(a == "#")
            break;

        cout << "Case " << i << ": " << country(a) << endl;
    }

    return 0;
}

string country(string a)
{
    if(a == "HELLO")
        return "ENGLISH";
    else if(a == "HOLA")
        return "SPANISH";
    else if(a == "HALLO")
        return "GERMAN";
    else if(a == "BONJOUR")
        return "FRENCH";
    else if(a == "CIAO")
        return "ITALIAN";
    else if(a == "ZDRAVSTVUJTE")
        return "RUSSIAN";
    else
        return "UNKNOWN";
}
