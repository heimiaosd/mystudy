/*************************************************************************
	> File Name: 21.求绝对值.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 03:53:56 PM CST
 ************************************************************************/

#include<stdio.h>

//输入一个实数求绝对值

int main()
{
    double n;
    printf("输入一个数\n");
    while(~scanf("%lf",&n))
    {
        printf("输出绝对值%lf\n",n<0?-n:n);
    }
    return 0;
}
