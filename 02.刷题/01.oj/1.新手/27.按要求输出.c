/*************************************************************************
	> File Name: 27.按要求输出.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 10:04:39 PM CST
 ************************************************************************/

#include<stdio.h>

//输入一个字符  a It is good  b OMG  c Yes!

int main()
{
    char ch;
    printf("输入一个字符");
    while(~scanf("%c",&ch))
    {
        getchar();
        ch != 'a' ? ch == 'b' ? printf("OMG\n") : printf("Yes!\n"):printf("It is good\n");
    }
    return 0;
}
