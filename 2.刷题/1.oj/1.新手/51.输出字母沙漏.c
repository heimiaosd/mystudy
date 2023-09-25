/*************************************************************************
	> File Name: 51.输出字母沙漏.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 12:10:23 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<i; j++)
            {
                printf(" ");
            }
            for(int j=i; j<=n; j++)
            {
                printf("%c",'A'+j);
            }
            for(int j=n; j>i; j--)
            {
                printf("%c",'A'+j-1);
            }
            printf("\n");
        }
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                printf(" ");
            }
            for(int j=i; j<=n; j++)
            {
                printf("%c",'A'+j);
            }
            for(int j=n; j>i; j--)
            {
                printf("%c",'A'+j-1);
            }
            printf("\n");
        }
    }

    return 0;
}
