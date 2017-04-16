//Accepted
#include <iostream>
using namespace std;

int main(void)
{
    int T, a, b;

    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        if(a == b) cout << "=\n";
        else if(a > b) cout << ">\n";
        else cout << "<\n";
    }

    return 0;
}
