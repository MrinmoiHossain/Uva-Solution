#include <iostream>
#include <iomanip>
#include <cstdio>
#include <map>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string name;
    getline(cin, name);
    getline(cin, name);
    map<string, int>data;

    while(n--){
        data.clear();
        int total = 0;

        while(getline(cin, name) && name[0]){
            ++data[name];
            ++total;
        }
        map<string, int>::iterator j;
        for(j = data.begin(); j != data.end(); j++){
            cout << fixed << setprecision(4) << j->first << " " << (100.0 * j->second) / total << endl;
        }
        if(n)
            cout << endl;
    }

    return 0;
}
