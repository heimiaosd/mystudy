/*************************************************************************
	> File Name: 17.注水问题.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 02:19:08 PM CST
 ************************************************************************/

#include<stdio.h>

// a水管单独注满水需要 a 小时  b水管单独注满水需要 b 小时  c水管放完水需要c小时
// 同时打开 a b 水管 t 小时 再打开 c 水管排水 水池注满需要多少小时

int main()
{
    int a,b,c,t;
    printf("输入 a水管小时数 b水管小时数 c水管小时数 t个小时\n");
    while(~scanf("%d%d%d%d",&a,&b,&c,&t))
    {
        double a1 = 1.0/a;
        double b1 = 1.0/b;
        double c1 = 1.0/c;
        double d = (a1+b1) * t;
        double f = (1-d)/(a1+b1-c1);
        printf("需要多少小时注满水池 %0.2lf\n",f);
    }
    return 0;
}
