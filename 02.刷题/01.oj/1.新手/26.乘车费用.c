/*************************************************************************
	> File Name: 26.乘车费用.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 09:56:56 PM CST
 ************************************************************************/

#include<stdio.h>

// 小明要乘坐出租车去奶奶家， 出租车的计价方式为 3公里内(含)的起步价是13元 超过3公里后按 2.3元/公里 另外在整个乘车途中多加1元燃油费 
// 已知小明到奶奶家的路程为n公里 请计算出租车费用是多少元

int main()
{
    int n;
    printf("输入多少公里\n");
    while(~scanf("%d",&n))
    {
        printf("费用=%0.1lf\n",n<=3?14:14+(n-3)*2.3);
    }
    return 0;
}
