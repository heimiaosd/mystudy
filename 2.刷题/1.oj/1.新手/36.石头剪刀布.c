/*************************************************************************
	> File Name: 36.石头剪刀布.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 08:58:25 AM CST
 ************************************************************************/

#include<stdio.h>

// 小明和李华在玩石头剪刀布 请判断输赢
// 石头赢剪刀 剪刀赢布 布赢石头 两方出的一样则是平局
// 输入两个字符 a,b 表示小明和李华所出的手势

int main()
{
    char a,b;
    printf("请输入两个字符 Y代表剪刀 O代表石头 H代表布\n");
    while(~scanf("%c %c",&a,&b))
    {
        getchar();
        printf("%c %c\n",a,b);
        if(a==b) printf("TIE\n");
        else if(a=='H' && b=='O' || a=='O' && b == 'Y' || a=='Y' && b == 'H') printf("MING\n");
        else printf("LI\n"); 
    }
    return 0;
}
