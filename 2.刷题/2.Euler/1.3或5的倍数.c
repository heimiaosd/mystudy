//求3或5的倍数
#include <stdio.h>

void fun1()
{
    int sum = 0;
    for(int i=1; i<1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);
}

void fun2()
{
    int sum3 = (3 + 999) * (1000 / 3) / 2;
    int sum5 = (5 + 995) * (999 / 5) / 2;
    int sum15 = (15 + 999 / 15 * 15) * (999 / 15) / 2;
    printf("%d\n",sum3 + sum5 - sum15);
}

int main()
{
    //方法1
    fun1();
    //方法2
    fun2();
    return 0;
}

