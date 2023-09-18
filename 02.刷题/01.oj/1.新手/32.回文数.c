/*************************************************************************
	> File Name: 32.回文数.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 11:26:02 PM CST
 ************************************************************************/

#include<stdio.h>

// 读入一个不超过四位的数 判断它是不是回文数 是输出 Yes 不是输出 No

int main()
{
    int n;
    printf("输入一个数\n");
    while(~scanf("%d",&n))
    {
        int temp = 0;
        int m = n;
        while(n > 0)
        {
            temp = temp*10 + n % 10;
            printf("temp = %d\n",temp);
            n /= 10;
        }
        temp == m? printf("Yes\n"):printf("No\n");
    }
    return 0;
}
