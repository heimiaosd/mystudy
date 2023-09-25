/*************************************************************************
	> File Name: 40.圆环面积.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 12:31:40 PM CST
 ************************************************************************/

 //有一个大圆的半径为 r1 它的中间有个小圆半径为 r2 求剩下的圆环面积
#define PI 3.14
#include<stdio.h>

int main()
{
    double a,b;
    printf("输入两个圆的半径\n");
    while(~scanf("%lf%lf",&a,&b))
    {
        printf("圆环的面积是%0.2lf\n",PI*a*a - PI*b*b);
    }
    return 0;
}


