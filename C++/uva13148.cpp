//Accepted
#include <bits/stdc++.h>
using namespace std;

void myfunction(long long int n);

int main(void)
{
    long long int n;

    while(cin >> n){
        if(n == 0)
            break;
        myfunction(n);
    }

    return 0;
}

void myfunction(long long int n)
{
    int arr[] = { 1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121 };
    bool mind = false;
    for(int i = 0; i < 22; i++){
        if(arr[i] == n){
            mind = true;
        }
    }
    if(mind)
        cout << "Special" << endl;
    else
        cout << "Ordinary" << endl;
}
