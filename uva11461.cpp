//Accepted
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, i, cont = 0;

    while(cin >> a >> b){
        cont = 0;
        if(a == 0 && b == 0)
            break;
        for(i = a; i <= b; i++){
            int c = sqrt(i);
            if(c * c == i)
                cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
