#include <stdio.h>
#include <math.h>
#define MAX_N 354294

int is_val(int n)
{
    int x = n, sum = 0;
    while(x) 
    {
        sum += pow(x % 10, 5);
        x /= 10;
    }
    return sum == n;
}

void fun1()
{
    int sum = 0;
    for(int i=2; i<= MAX_N; i++)
    {
        if(!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n",sum);
}

int main()
{
    fun1();
    return 0;
}

