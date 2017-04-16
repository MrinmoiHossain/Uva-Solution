//Accepted
#include <bits/stdc++.h>
using namespace std;

int word(string a);

int main(void)
{
    string a;

    while(getline(cin, a)){
        cout << word(a) << endl;
    }

    return 0;
}

int word(string a)
{
    int con = 0, len = a.length();
    for(int i = 0; i < len; i++)
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
            con++;
            while((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') && i < len) i++;
        }
    return con;
}
