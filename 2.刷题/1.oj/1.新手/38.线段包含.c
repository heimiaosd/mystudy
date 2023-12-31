/*************************************************************************
	> File Name: 38.线段包含.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 11:30:04 AM CST
 ************************************************************************/

//给定一个数轴上的两条线段 判断两条线段是否存在完全覆盖关系
//输入第一行两个数 a,b  表示第一条线段的两个端点
//输入第二行两个数 c,d  表示第二条线段的两个端点
//如果两条线段存在完全覆盖关系输出 YES 否则输出 NO

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("输入第一条线段的两个端点\n输入第二条线段的两个端点\n");
    while(~scanf("%d%d\n%d%d",&a,&b,&c,&d))
    {
        getchar();
        printf("%d %d %d %d\n",a,b,c,d);
        if(a <= c && b >= d || c <= a && d >= b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


