/*************************************************************************
	> File Name: 9.计算BMI.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 01:23:54 PM CST
 ************************************************************************/

#include<stdio.h>

//输入两个实数表示体重 w 和 身高 h 输出BMI的值 公式如下 bmi = w/(h*h)

int main()
{
    double w,h;
    printf("输入两个实数\n");
    while(~scanf("%lf%lf",&w,&h))
    {
        printf("身高 %lf\n体重 %lf\nBMI %0.2lf\n",h,w,w/(h*h));
    }

    return 0;
}
