#include <stdio.h>
#include <stdlib.h>
#define MAX_N 200000

void init_prime(int *prime)
{
    for(int i=2; i<=MAX_N; i++)
    {
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        for(int j=i, I=MAX_N/i; j<=I; j++)
        {
            prime[j * i] = 1;
        }
    }
    return;
}

int main()
{
    int *arr = (int*)calloc(MAX_N, sizeof(int));
    init_prime(arr);
    printf("%d\n",arr[10001]);
    free(arr);
    return 0;
}

