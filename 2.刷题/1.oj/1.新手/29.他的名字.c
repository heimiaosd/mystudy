/*************************************************************************
	> File Name: 29.他的名字.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 10:32:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char ch;
    printf("输入一个字符\n");
    while(~scanf("%ch",&ch))
    {
        getchar();
        switch(ch)
        {
            case 'h':
            printf("He\n");
            break;
            case 'l':
            printf("Li\n");
            break;
            case 'c':
            printf("Cao\n");
            break;
            case 'd':
            printf("Duan\n");
            break;
            case 'w':
            printf("Wang\n");
            break;
            default:
            printf("Not Here\n");
            break;
        }
    }
    return 0;
}
