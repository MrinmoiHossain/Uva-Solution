//Accepted
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, a;

    while(scanf("%d", &n) != 0){
        int arr[100] = {0};
        if(n == 0)
            break;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            arr[a]++;
        }

        int s = 0;
        for(int i = 0; i < 100; i++){
            if(arr[i] > 0)
                for(int j = 1; j <= arr[i]; j++){
                    s++;
                    printf("%d", i);
                    if(s != n)
                        printf(" ");
                }

        }

        printf("\n");
    }

    return 0;
}
