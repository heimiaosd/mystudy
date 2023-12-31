/*************************************************************************
	> File Name: 39.招聘.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 12:01:52 PM CST
 ************************************************************************/

 //某厂进行招聘 收到了很多简历 每份简历包括以下元素
 //1. 学历 0表示本科 1表示硕士 2.表示博士毕业
 //2. 毕业院校的排名 用一个 1-1000 的整数表示 数字越小越好
 //3. 年龄大小， 一个 10-80 之间的整数
 //4. 工作年份，一个 0-30 之间的整数
 
 //由于简历太多 我们需要筛选一部分简历进行面试 面试的条件为
 //1.学校排名在前 50(含) 或学历在硕士及以上
 //2.年龄小于等于25， 或工作年份在5年及以上的
 //请根据简历的条件判断是否进行面试

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("输入一行四个整数， 依次表示学历，毕业院校的排名 年龄大小 工作年份\n");
    while(~scanf("%d%d%d%d",&a,&b,&c,&d))
    {
        getchar();
        if(a >= 1 && b <= 50 && c <= 25 && d >= 5) printf("ok\n");
        else printf("pass\n");
    }
    return 0;
}
