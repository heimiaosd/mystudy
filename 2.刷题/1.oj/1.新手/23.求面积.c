/*************************************************************************
	> File Name: 23.求面积.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 09:37:04 PM CST
 ************************************************************************/

#include<stdio.h>

// 给定一个三角形或者长方形的底和高 求它的面积

int main()
{
    printf("请输入 r 或者 t r（长方形) t(三角形)\n");
    char ch;
    while(~scanf("%c",&ch))
    {
        double m,n;
        if(ch == 'r')
        {
            printf("请输入长和宽\n");
            scanf("%lf%lf",&m,&n);
            printf("长方形的面积 = %lf\n",m*n);
        }
        else if(ch == 't') 
        {
            printf("请输入底和高\n");
            scanf("%lf%lf",&m,&n);
            printf("三角形的面积 = %lf\n",m*n/2);
        }
    }
    return 0;
}
