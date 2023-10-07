#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5];
void init()
{
    for(int i=2; i<=MAX_N; i++)
    {
        if(prime[i])continue;
        prime[i] = i;
        for(int j=2, I=MAX_N/i; j<=I; j++)
        {
            if(prime[j*i]) continue;
            prime[j*i]=i;
        }
    }
    return;
}

int main()
{
    init();
    for(int i=2; i<=MAX_N; i++)
    {
        printf("prime[%d] = %d\n",i,prime[i]);
    }
    return 0;
}

