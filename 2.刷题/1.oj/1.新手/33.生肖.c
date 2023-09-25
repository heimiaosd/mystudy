/*************************************************************************
	> File Name: 33.生肖.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 11:33:47 PM CST
 ************************************************************************/

#include<stdio.h>

// 已知 1900年是鼠年 输入一个年份对应其生肖
// 鼠rat 牛ox 虎tiger 兔rabbit 龙dragon 蛇snake
// 马horse 羊sheep 猴monkey 鸡rooster 狗dog 猪pig

int main()
{
    int y;
    printf("输入年份\n");
    while(~scanf("%d",&y))
    {
        y += 2400;
        int t = (y - 1900) % 12;
        switch(t)
        {
            case 0: printf("rat\n"); break;
            case 1: printf("ox\n"); break;
            case 2: printf("tiger\n"); break;
            case 3: printf("rabbit\n"); break;
            case 4: printf("dragon\n"); break;
            case 5: printf("snake\n"); break;
            case 6: printf("horse\n"); break;
            case 7: printf("sheep\n"); break;
            case 8: printf("monkey\n"); break;
            case 9: printf("rooster\n"); break;
            case 10: printf("dog\n"); break;
            case 11: printf("pig\n"); break;
        }
    }
    return 0;
}
