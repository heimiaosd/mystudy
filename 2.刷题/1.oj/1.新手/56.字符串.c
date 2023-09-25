/*************************************************************************
	> File Name: 56.字符串.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 02:09:06 PM CST
 ************************************************************************/

//输入一个字符串 将其中的大小写字母改为下一个字母 z的下一个字母为a
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = "";
    while(~scanf("%s",str))
    {
        for(int i=0; i<strlen(str); i++)
        {
            if((int)str[i]>=65 && (int)str[i]<=91)
            {
                if(str[i] == 'Z') str[i] = 'A';
                else str[i] += 1;
            }
            else if((int)str[i]>=96 && (int)str[i]<=122)
            {
                if(str[i] == 'z') str[i] = 'a';
                else str[i] += 1;
            }
        }
        printf("%s",str);
    }
    return 0;
}

