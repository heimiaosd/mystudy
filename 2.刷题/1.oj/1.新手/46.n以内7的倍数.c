/*************************************************************************
	> File Name: 45.11.倍数.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 02:27:02 PM CST
 ************************************************************************/

//输入一个数n求7的倍数

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%7 == 0) printf("%d\n",i);

    }
    return 0;
}
