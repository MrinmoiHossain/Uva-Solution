#include <iostream>
#include <algorithm> // for next_permutation, sort
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool cmp(char a, char b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        sort(s.begin(), s.end(), cmp);

        do{
            cout << s << endl;
        }while(next_permutation(s.begin(), s.end(), cmp));
    }

    return 0;
}

bool cmp(char a, char b)
{
    if(tolower(a) == tolower(b))
        return a < b;
    return tolower(a) < tolower(b);
}
