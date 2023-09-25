/*************************************************************************
	> File Name: 50.输出字母菱形.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 03:24:20 PM CST
 ************************************************************************/

//输出字母菱形
#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                printf(" ");
            }
            for(int j=0; j<(i+1)*2-1; j++)
            {
                printf("%c",'A'+i); 
            }
            printf("\n");
        }
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                printf(" ");
            }
            for(int j=0; j<(n-i)*2-1; j++)
            {
                printf("%c",'A'+n-(i+1)); 
            }
            printf("\n");
        }
    }
    return 0;
}

