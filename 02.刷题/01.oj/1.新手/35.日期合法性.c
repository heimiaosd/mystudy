/*************************************************************************
	> File Name: 35.日期合法性.c
	> Author: 
	> Mail: 
	> Created Time: Tue 19 Sep 2023 12:06:14 AM CST
 ************************************************************************/

#include<stdio.h>

//输入一个日期 日期存在 Yes 不存在 No
int main()
{
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    if(m>=1 && m<=12) {
        if (m == 1 || m == 3 || m==5||m==7||m==8 || m==10 || m==12){
            if(d>=1 && d<=31) printf("YES");
            else printf("NO");
        } else if (m==2) {
            if(y%400 == 0 || y%4==0 && y%100 != 0){
                if(d>=1&&d<=29) printf("YES");
                else printf("NO");
            } else {
                if(d>=1&&d<=28) printf("YES");
                else printf("NO");
            }
        } else {
            if(d>=1&&d<=30) printf("YES");
            else printf("NO");
        }
    } else {
        printf("NO");
    } 
    return 0;

}