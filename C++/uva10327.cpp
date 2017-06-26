//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;

    while(cin >> N){
        int arr[N];

        for(int i = 0; i < N; i++)
            cin >> arr[i];
        int con = 0;
        for(int i = 1; i < N; i++){
            int j = i;
            while(j > 0 && arr[j - 1] > arr[j]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
                con++;
            }
        }
        cout << "Minimum exchange operations : " << con << endl;
    }

    return 0;
}
