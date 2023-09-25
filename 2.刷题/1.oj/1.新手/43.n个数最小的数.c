/*************************************************************************
	> File Name: 43.n个数最小的数.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 02:05:00 PM CST
 ************************************************************************/

//输入n个数输出最小的数

#include<stdio.h>

int main()
{
    int n,min = 10001;
    scanf("%d",&n);
    for(int i=0; i<n; i++) 
    {
        int t;
        scanf("%d",&t);
        if(min > t) min = t;
    }
    printf("最小的数是 %d\n",min);
    return 0;
}

