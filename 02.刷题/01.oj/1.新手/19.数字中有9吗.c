/*************************************************************************
	> File Name: 19.数字中有9吗.c
	> Author: 
	> Mail: 
	> Created Time: Sun 17 Sep 2023 03:42:20 PM CST
 ************************************************************************/

#include<stdio.h>

//输入一个三位数 判断它的各个位上是否存在数字9

int main()
{
    int n;
    printf("输入一个数\n");
    while(~scanf("%d",&n))
    {
        int flag = 0;
        while(n>0)
        {
            if(n%10 == 9)  
            {
                flag = 1;
                break;
            }
            n/=10;
        }
        printf("数字中有9吗 %s\n",flag == 1?"YES":"NO"); 
    }
    return 0;
}
