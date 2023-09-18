/*************************************************************************
	> File Name: 30.彩票.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 10:47:29 PM CST
 ************************************************************************/

#include<stdio.h>

//某种彩票的获奖号码由两位非零数组成 获奖规则如下
//如果用户的号码和中奖号码完全相同 奖金为100元
//如果用户的号码能匹配中奖号码的所有数字 奖金为20元
//如果用户的号码能匹配中奖号码的一个数字 奖金为2元
//输入两个两位整数 分别表示中奖号码 和 用户号码 输出奖金数

int main()
{
    int m,n;
    printf("请输入中奖号码和用户号码\n");
    while(~scanf("%d%d",&m,&n))
    {
        int temp[2];
        temp[0] = m / 10;
        temp[1] = m % 10;
        int temp1[2];
        temp1[0] = n / 10;
        temp1[1] = n % 10;
        int x = 0;
        int sum = 0;
        for(int i=0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(temp[j] == temp1[i]) x++;
            }
        }
        if(x == 2) sum = 20;
        else if(x == 1) sum = 2;
        if(x == 2 && temp[0] * 10 + temp[1] == temp1[0] * 10 + temp1[1]) sum = 100;
        printf("奖金 = %d\n",sum);
    }

    return 0;
}
