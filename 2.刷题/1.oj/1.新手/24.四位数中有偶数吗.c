/*************************************************************************
	> File Name: 24.四位数中有偶数吗.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 09:44:43 PM CST
 ************************************************************************/

#include<stdio.h>

//输入一个四位数 判断它各个位上是否存在偶数 有YES 没有NO

int main()
{
    int n;
    printf("输入一个数\n");
    while(~scanf("%d",&n))
    {
        int m = 0;
        while(n>0)
        {
            if(n%10%2 == 0)  
            {
                m = 1;
            }
            n /= 10;
        }
        m == 1 ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}
