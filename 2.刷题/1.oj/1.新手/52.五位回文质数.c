/*************************************************************************
	> File Name: 52.五位回文质数.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 01:15:13 AM CST
 ************************************************************************/
//输入两个五位数 a,b
//求两个数之间既是回文数又是质数的数

#include<stdio.h>

int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        for(int i=a; i<=b; i++)
        {
            int m = i;
            int t = 0;
            int ind = 1;
            int flag = 1;
            while(ind<=i)
            {
                if(i%ind == 0 && ind != 1 && ind != i)
                {
                    flag = 0;
                    ind++;
                    continue;
                }
                ind++;
            }
            if(flag == 1)
            {
                while(m>0)
                {
                    t *= 10;
                    t += m%10;
                    m /= 10;
                }
                if(t == i) printf("%d ",i);
            }
        }
    }
    return 0;
}

