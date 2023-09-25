/*************************************************************************
	> File Name: 13.计算圆柱体的体积.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 01:41:11 PM CST
 ************************************************************************/
#define PI 3.14
#include<stdio.h>

//输入两个实数 r 和 h 分别表示 圆柱体半径和高 求体积

int main()
{
    double r,h;
    printf("输入圆的半径和高\n"); 
    while(~scanf("%lf%lf",&r,&h))
    {
        printf("高= %lf\n半径=%lf\n体积=%lf\n",h,r,r*r*PI*h);
    }
    return 0;
}
