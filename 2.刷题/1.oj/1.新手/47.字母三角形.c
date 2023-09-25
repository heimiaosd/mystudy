/*************************************************************************
	> File Name: 47.字母三角形.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 02:34:07 PM CST
 ************************************************************************/

//输入一个正整数n
#include<stdio.h>

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int m=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                printf("%c",'A'+m);
                m++;
            }
            printf("\n");
        }
    }
    return 0;
}

