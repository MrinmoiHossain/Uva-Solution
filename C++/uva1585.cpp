//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    char ch[83];

    for(int i = 1; i <= T; i++){
        cin >> ch;
        int sum = 0, con = 1;

        for(int j = 0; ch[j]; j++){
            if(ch[j] == 'O'){
                sum += con;
                con++;
            }
            else{
                sum += 0;
                con = 1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
