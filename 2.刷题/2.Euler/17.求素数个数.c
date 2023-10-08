#include <stdio.h>
#include <math.h>
#define MAX_N 1000000

int prime[MAX_N + 5];
int is_prime[MAX_N + 5] = {1,1};
void init()
{
    for(int i = 2; i <= MAX_N; i++)
    {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++)
        {
            if(prime[j] * i > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return;
}

int is_val(int n)
{
    int x = n;
    //从右向左截取
    while(x)
    {
        if(is_prime[x]) return 0;
        x /= 10;
    }
    //从左向右截取
    int h = pow(10, floor(log10(n)));
    x = n;
    while(x)
    {
        if(is_prime[x]) return 0;
        x %= h;
        h /= 10;
    }
    return 1;
}

int main()
{
    init();
    int sum = 0, flag = 11;
    for(int i = 5; flag && i <= prime[0]; i++)
    {
        if(!is_val(prime[i])) continue;
        sum += prime[i];
        flag--;
    }
    printf("flag : %d, sum = %d\n",flag ,sum);
    return 0;
}


