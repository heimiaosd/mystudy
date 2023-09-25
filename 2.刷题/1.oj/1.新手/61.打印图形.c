/*************************************************************************
	> File Name: 61.打印图形.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 03:17:40 PM CST
 ************************************************************************/

//输入任意一个数 n
//打印 x图形
#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<=n;i++)
        {
            for(int j=0; j<i; j++)
            {
                printf(" ");
            }
            for(int j=n-i; j>=0; j--)
            {
                if(j==n-i)
                {
                    printf("%d",j);
                }
                else 
                {
                    printf(" ");
                }
            }
            for(int j=1; j<=n-i; j++)
            {
                if(j==n-i)
                {
                    printf("%d",j);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for(int i = n-1; i>=0;i--)
        {
            for(int j=0; j<i; j++)
            {
                printf(" ");
            }
            for(int j=n-i; j>=0; j--)
            {
                if(j==n-i)
                {
                    printf("%d",j);
                }
                else 
                {
                    printf(" ");
                }
            }
            for(int j=1; j<=n-i; j++)
            {
                if(j==n-i)
                {
                    printf("%d",j);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
