#include <stdio.h> 
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
            if(i % prime[j] == 0)break;
        }
    }
    return;
}

int func(int x)
{
    return 2 * x * x; 
}

int binarry_search(int (*f)(int), int head, int tail, int val)
{
    int mid;
    while(head <= tail)
    {
        mid = (head + tail) >> 1;
        if(f(mid) == val) return 1;
        else if(f(mid) < val) head = mid + 1;
        else tail = mid -1;
    }
    return 0;
}

int is_val(int n)
{
    for(int i = 1; i <= prime[0] && prime[i] < n; i++)
    {
        int val = n - prime[i];
        if(binarry_search(func, 1, val, val)) return 1;
    }
    return 0;
}


int main()
{
    init();
    for(int i = 9; i <= MAX_N; i += 2)
    {
        if(is_prime[i] == 0) continue;
        if(is_val(i)) continue;
        printf("%d\n", i);
        break;
    }
    return 0;
}

