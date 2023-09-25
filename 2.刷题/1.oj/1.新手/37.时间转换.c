/*************************************************************************
	> File Name: 37.时间转换.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Sep 2023 09:11:28 AM CST
 ************************************************************************/

#include<stdio.h>

// 输入一个整数t 计算当天从 00:00:00 开始经过t秒以后的时间
// 输出格式如下
// 输入格式按照12小时制输出
// 如果时间在中午 12 : 00 : 00 之前，那么输出 hh : mm : ss   am
// 如果时间在中午 12 : 00 : 00 至下午 01 ：00 ：00 之间，那么输出 12 : mm : ss  midnoon
// 如果时间在下午 01 : 00 : 00 之后，那么输出 hh : mm : ss   pm
// 其中 h m s 分别表示 小时 分钟 秒 如不足两位 前面用0代替

int main()
{
    int t;
    printf("输入一个数\n");
    while(~scanf("%d",&t))
    {
        int h = t / 60 / 60;        
        int m = (t - h * 3600) / 60;
        int s = (t - h* 3600 - m * 60) ;
        if(h < 12) printf("%02d:%02d:%02d am\n",h,m,s);
        else if(h >= 12 && h <= 13) printf("12:%02d:%02d midnoon\n",m,s);
        else printf("%02d:%02d:%02d pm\n",h-12,m,s);
    }
    return 0;
}
