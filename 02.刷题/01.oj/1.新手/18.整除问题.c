/*************************************************************************
	> File Name: 18.整除问题.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 03:04:04 PM CST
 ************************************************************************/

#include<stdio.h>

//判断一个数 a 能否被另一个整数 b 整数 能返回TRUE 不能返回FALSE

int main()
{
    int a,b;
    printf("输入两个数\n");
    while(~scanf("%d%d",&a,&b))
    {
        printf("%d %% %d == 0 %s\n",a,b,a%b==0?"YES":"NO");
    }
    return 0;
}
