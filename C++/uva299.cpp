//Accepted
#include <iostream>
using namespace std;

int insertion(int arr[], int n);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;
        int arr[n];

        for(int j = 0; j < n; j++)
            cin >> arr[j];

        cout << "Optimal train swapping takes " << insertion(arr, n) << " swaps." << endl;
    }

    return 0;
}

int insertion(int arr[], int n)
{
    int con = 0;
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            con++;
            j--;
        }
    }
    return con;
}
