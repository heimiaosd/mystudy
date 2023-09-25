/*************************************************************************
	> File Name: 7.圆形的面积和周长.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 12:53:42 PM CST
 ************************************************************************/
#define PI 3.14
#include<stdio.h>

//输入圆形的面积和周长

int main()
{
    double r;
    printf("请输入圆形的半径\n");
    while(~scanf("%lf",&r))
    {
        printf("圆形的面积 = %lf\n 圆形的周长 = %lf\n",PI*r*r,2*PI*r);
    }
    return 0;
}
