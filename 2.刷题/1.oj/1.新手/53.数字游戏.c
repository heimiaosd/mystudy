/*************************************************************************
	> File Name: 53.数字游戏.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 08:14:20 AM CST
 ************************************************************************/

//给定两个四位正整数 a,b 找出这两个数之间(含)所有满足以下条件的数
//1.这个四位数能被6整除
//2.千位数字与百位数字构成的两位数AB是一个质数
//3.十位数字与个位数字构成的两位数CD是一个完全平方数
#include<stdio.h>

int is_prime(int n)
{
    for(int i=2; i*i <= n; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int is_pow(int n)
{
    switch(n)
    {
        case 1:
        case 4:
        case 9:
        case 16:
        case 25:
        case 36:
        case 49:
        case 64:
        case 81: return 1;
    }
    return 0;
}

int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        int ind = 0;
        for(int i=a; i<=b; i++)
        {
            if(i%6==0 && is_prime(i/100) && is_pow(i%100))
            {
                printf("%d ",i);
                ind++;
            }
        }
        printf("\n%d",ind);
    }
    return 0;
}
