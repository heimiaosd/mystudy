/*************************************************************************
	> File Name: 59.矩阵旋转.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 02:52:20 PM CST
 ************************************************************************/

// 第一行输入两个整数 n,m
// 接下来 n 行  每行输入m个元素 表示输入的矩阵
// 显示矩阵旋转90°的值
#include<stdio.h>

int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        getchar();
        int nums[][200] = {0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&nums[i][j]);
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=n-1; j>=0; j--)
            {
                printf("%d ",nums[j][i]);
            }
            printf("\n");
        } 
    }
    return 0;
}
