/*************************************************************************
	> File Name: 3.模运算.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 12:30:24 PM CST
 ************************************************************************/

#include<stdio.h>

// 给定两个正整数a和b 求a%b的值

int main()
{
    int a,b;
    printf("输入两个整数；\n");
    while(~scanf("%d%d",&a,&b))
    {
        printf("%d %% %d = %d\n",a,b,a%b);
    }
    return 0;
}
