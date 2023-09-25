/*************************************************************************
	> File Name: 54.字符串中A的数量.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 01:43:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char str[100] = "";
    while(~scanf("%s",str))
    {
        int ind=0;
        for(int i=0; i<sizeof(str)/sizeof(char); i++)
        {
            if(str[i] == 'A')
            {
                ind++;
            }
        }
        printf("A有%d个\n",ind);
    }
    return 0;
}
