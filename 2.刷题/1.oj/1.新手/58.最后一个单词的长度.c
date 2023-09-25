/*************************************************************************
	> File Name: 58.最后一个单词的长度.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 02:42:10 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100] = "";
    while(~scanf("%[^\n]",s))
    {
        getchar();
        printf("%s\n",s);
        int num = 0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==' ') num = 0;
            else num++;            
        }
        printf("%d",num);
    }
    return 0;
}
