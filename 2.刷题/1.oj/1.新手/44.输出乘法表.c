/*************************************************************************
	> File Name: 44.输出乘法表.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 02:18:52 PM CST
 ************************************************************************/

 //输出乘法表

#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                printf("%d*%d=%d ",i,j,i*j);
            }
            printf("\n");
        }
    }
    return 0;
}


