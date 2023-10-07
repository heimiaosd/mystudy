#include <stdio.h>
#include <stdlib.h>
#define MAX_N 2000000

void init(int *prime)
{
    for(int i=2; i<=MAX_N; i++)
    {
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j=1; j<=prime[0]; j++)
        {
            if(prime[j] * i > MAX_N) break; 
            prime[prime[j] * i]  = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return;
}

int main()
{
    int *prime = (int *) calloc(MAX_N + 5, sizeof(int));
    init(prime);
    long long sum = 0;
    for(int i=1; i<=prime[0]; i++)
    {
        sum += prime[i];
    }
    printf("sum = %lld\n",sum);
    return 0;
}

