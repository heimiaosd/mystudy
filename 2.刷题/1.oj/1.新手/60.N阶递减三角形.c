/*************************************************************************
	> File Name: 60.N阶递减三角形.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 03:12:01 PM CST
 ************************************************************************/

//输入一个整数n
//输出 递减三角形
#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i < n; i++)
        {
            for(int j=n-i; j>0; j--)
            {
                printf("%d",j);
            } 
            printf("\n");
        }
    }
    return 0;
}
