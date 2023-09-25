/*************************************************************************
	> File Name: 34.昨天和明天.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 11:50:42 PM CST
 ************************************************************************/

#include<stdio.h>

//输入一个日期 计算这个日期的前一天和后一天的日期

int day_month(int y, int m)
{
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
    }
    if (y%400==0 || y%100 !=0 && y%4 == 0) {
        return 29; 
    } else {
        return 28;
    }
}

int main()
{
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    if(m == 1 && d == 1) {
        printf("%d %d %d\n%d %d %d",y-1,12,31,y,1,2);    
    }else  if(m==12 && d==31){
        printf("%d %d %d\n%d %d %d",y,12,30,y+1,1,1);    
    } else if(d == day_month(y,m)){
        printf("%d %d %d\n%d %d %d",y,m,d-1,y,m+1,1);    
    } else if(d==1) {
        printf("%d %d %d\n%d %d %d",y,m-1,day_month(y,m-1),y,m,2);    
    } else {
        printf("%d %d %d\n%d %d %d",y,m,d-1,y,m,d+1);    
    }
    return 0;
}

