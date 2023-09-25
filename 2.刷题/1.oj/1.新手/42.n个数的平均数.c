/*************************************************************************
	> File Name: 42.n个数的平均数.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 01:55:28 PM CST
 ************************************************************************/

//求n个数的平均数
#include<stdio.h>

int main()
{
    int n;
    double sum;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int temp;
        scanf("%d",&temp);
        sum += temp;
    }
    printf("平均数=%0.2lf\n",sum/n);
    return 0;
}

