#define MAX_N 4000000
#include <stdio.h>
int fib[40] = {0};

//方法1
void fun1()
{
    fib[1] = 1, fib[2] = 2;
    int n = 2;
    while(fib[n] + fib[n-1] <= MAX_N)
    {
        n++;
        fib[n] = fib[n-1] + fib[n-2];
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(fib[i] & 1) continue;
        sum += fib[i];
    }
    printf("%d, n = %d\n",sum,n);
}

//方法2 滚动数组
void fun2()
{
   int fib[3] = {0}; 
   fib[1] = 1, fib[2] = 2;
   int n = 2, sum = 2;
   while(fib[n % 3] + fib[(n-1) % 3] <= MAX_N)
   {
       n++;
       fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
       if(fib[n % 3] & 1) continue;
       sum += fib[n % 3];
   }
   printf("%d\n",sum);
}

//方法3 三个变量
void fun3()
{
    int a = 1, b = 2, c, sum = 2;
    while(a + b <= MAX_N)
    {
        c = a +b;
        a = b;
        b = c;
        if(c & 1) continue;
        sum += c;
    }
    printf("%d\n",sum);
}

//方法4 两个变量
void fun4()
{
    int a = 1, b = 2, sum = 2;
    while(a + b <= MAX_N)
    {
        b = a + b;
        a = b - a;
        if(b & 1) continue;
        sum += b;
    }
    printf("%d\n",sum);
}

int main()
{
    fun1();
    fun2();
    fun3(); 
    fun4();
    return 0;
}
