//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a;
    bool b = true;

    while(getline(cin, a)){
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 34){
                if(b){
                  a.erase(i, 1);
                  a.insert(i, "``");
                  b = 0;
                }
                else{
                   a.erase(i, 1);
                   a.insert(i, "''");
                   b = 1;
                }
            }
        }
        cout << a << endl;
    }


    return 0;
}
