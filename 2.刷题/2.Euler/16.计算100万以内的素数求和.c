#include <stdio.h>
#include <math.h>
#define MAX_N 1000000

int prime[MAX_N + 5];
int is_prime[MAX_N + 5] = {1,1};
void init()
{
    for(int i=2; i<= MAX_N; i++)
    {
        if(!is_prime[i])prime[++prime[0]] = i;
        for(int j=1; j<=prime[0]; j++)
        {
            if(prime[j] * i > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(int x)
{
    int digit = floor(log10(x)) + 1;
    int h = pow(10,digit - 1);
    for(int i=1; i<digit; i++)
    {
        x = (x-x/h*h)*10+x/h;
        if(is_prime[x]) return 0;
    }
    return 1;
}

int main()
{
    init();
    int cnt = 0;
    for(int i=1; i<=prime[0]; i++)
    {
        cnt += is_val(prime[i]);
    }
    printf("%d\n",cnt);
    return 0;
}

