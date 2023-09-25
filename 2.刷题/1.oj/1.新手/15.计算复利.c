/*************************************************************************
	> File Name: 15.计算复利.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 01:50:39 PM CST
 ************************************************************************/

#include<stdio.h>

// 假设每个月存100 月利率为0.00417 第一个月后 账户上的值就变成 100 *（1+0.00417） = 100.417 
// 以此类推 推算六个月后账户上的钱数

int main()
{
    double n;
    printf("输入初始钱数\n");
    while(~scanf("%lf",&n))
    {
        double sum = 0;  
        for(int i=0;i<6;i++)
        {
            sum = (n+sum)*(1+0.00417);
            printf("%d %lf\n",i,sum);
        }
        printf("六个月后 = %0.2lf\n",sum);
    }
    return 0;
}
