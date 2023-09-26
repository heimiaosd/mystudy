#include <stdio.h>

int is_reverse(int n)
{
    int x = n, sum = 0;
    while(x)
    {
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    return sum == n;
}

void fun1()
{
    int ans = 0;
    for(int a=100; a < 1000; a++)
    {
        for(int b = 100; b < 1000; b++)
        {
            if(!is_reverse(a * b) || a * b < ans) continue;
            ans = a * b;
            printf("%d * %d = %d\n", a, b, a*b);
        }
    }
    printf("%d\n",ans);
}

void fun2()
{
    int ans = 0;
    for(int a=100; a < 1000; a++)
    {
        for(int b = (ans / a >= 100 ? ans / a + 1 : a); b < 1000; b++)
        {
            if(!is_reverse(a * b)) continue;
            ans = a * b;
            printf("%d * %d = %d\n", a, b, a*b);
        }
    }
    printf("%d\n",ans);
}

int main()
{
    fun1();
    fun2();
    return 0;
}

