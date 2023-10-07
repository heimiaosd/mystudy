#include <stdio.h>
#define MAX_N 3628800

void init(int *num)
{
    num[0] = 1;
    for(int i=1; i<10; i++)
    {
        num[i] = num[i - 1] * i;
    }
    return ;
}

int is_val(int *num, int n)
{
    int x = n, tmp = 0;
    while(x)
    {
        tmp += num[x % 10];
        x /= 10;
    }
    return tmp == n;
}


int main()
{
    int sum = 0, num[10] = {0};
    init(num);
    for(int i=10; i<=MAX_N; i++)
    {
        if(!is_val(num,i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

