//Accepted
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int T, N;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> N;
        int arr[N];
        for(int j = 0; j < N; j++)
            cin >> arr[j];
        sort(arr, arr + N);

        cout << "Case " << i << ": " << arr[N - 1] << endl;
    }

    return 0;
}
