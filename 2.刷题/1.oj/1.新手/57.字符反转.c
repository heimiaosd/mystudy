/*************************************************************************
	> File Name: 57.字符反转.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 02:32:15 PM CST
 ************************************************************************/

//输入一个字符串反转输出
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = "";
    while(~scanf("%s",str))
    {
        for(int i=strlen(str)-1; i>=0 ; i--)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}
