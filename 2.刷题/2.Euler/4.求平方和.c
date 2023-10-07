#include <stdio.h>

void fun1()
{
    int sum1 = 0, sum2 = 0;
    for(int i=1; i<=100; i++)
    {
        sum1 += i*i;
        sum2 += i;
    }
    printf("%d\n",sum2 * sum2 - sum1);
}

//平方和公式
void fun2()
{
    int sum1 = 5050;
    int sum2 = n * (n + 1) * (2 * n + 1) / 6;
    printf("%d\n", sum1 * sum1 - sum2);
}

int main()
{
    fun1();
    fun2();
    return 0;
}

