//Accepted
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string a[150];
    int pos = 0;
    int len = 0;

    while(getline(cin, a[pos])){
        if(a[pos].length() > len)
            len = a[pos].length();
        pos++;
    }

    for(int i = 0; i < len; i++){
        for(int j = pos - 1; j >= 0; j--){
            if(a[j].length() > i)
                cout << a[j][i];
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
