//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<int, int>a;
    vector<int>c;
    int b;

    while(cin >> b){
        a[b]++;
        c.push_back(b);
    }
    for(int i = 0; i < c.size(); i++){
        for(int j = i + 1; j < c.size(); j++){
            if(c[i] == c[j])
                c.erase(c.begin()+j);
        }
    }
    for(int i = 0; i < c.size(); i++){
        for(int j = i + 1; j < c.size(); j++){
            if(c[i] == c[j])
                c.erase(c.begin()+j);
        }
    }

    for(int i = 0; i < c.size(); i++){
        for(map<int, int>::iterator it = a.begin(); it != a.end(); ++it){
            if(c[i] == it->first)
                cout << it->first << " " << it->second << endl;
        }
    }


    return 0;
}
