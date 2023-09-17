/*************************************************************************
	> File Name: 6.求差.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 12:45:54 PM CST
 ************************************************************************/

#include<stdio.h>

// 输入两个整数 a和b 求 a-b的值

int main()
{
    int a,b;
    printf("请输入两个数字\n");
    while(~scanf("%d%d",&a,&b))
    {
        printf("%d - %d = %d\n",a,b,a-b);
    }
    return 0;
}
