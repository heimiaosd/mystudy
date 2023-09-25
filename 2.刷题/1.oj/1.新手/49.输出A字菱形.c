/*************************************************************************
	> File Name: 49.输出A字菱形.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 02:55:07 PM CST
 ************************************************************************/
//输出数字菱形
#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(j==0)
                {
                    for(int k=0; k<n-(i+1); k++)
                    {
                        printf(" ");
                    }
                }
                for(int k=0; k<2; k++)
                {
                    printf("A");                 
                }
            }
            printf("\n");
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i; j<n-1; j++)
            {
                if(j==i)
                {
                    for(int k=0; k<=i; k++)
                    {
                        printf(" ");
                    }
                }
                for(int k=0; k<2; k++)
                {
                    printf("A");                 
                }
            }
            printf("\n");
        }
    }
    return 0;
}

