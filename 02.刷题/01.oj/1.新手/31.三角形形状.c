/*************************************************************************
	> File Name: 31.三角形形状.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Sep 2023 11:04:41 PM CST
 ************************************************************************/

#include<stdio.h>

// 读入三角形的三条边
// 如果输入值不合法 输出 illegal triangle
// 如果输入值合法 两条较短边的平方和大于最长边的平方 则输出 acute triangle 表示锐角三角形
// 如果输入值合法 两条较短边的平方和等于最长边的平方 则输出 right triangle 表示直角三角形
// 如果输入值合法 两条较短边的平方和小于最长边的平方 则输出 obtuse triangle 表示钝角三角形
// 如果两条短边的和大于第三边 那这个三角形就是合法的 

int main()
{
    int a,b,c;
    printf("输入三条边\n");
    while(~scanf("%d%d%d",&a,&b,&c))
    {        
        if(a>b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if(b>c)
        {
            int temp = b;
            b = c;
            c = temp;
        }
        if(a+b>c)
        {
            if(a * a + b * b > c * c)
            {
                printf("acute triangle\n");
            }
            else if(a * a + b * b  == c * c)
            {
                printf("right triangle\n");
            }
            else if(a * a + b * b < c * c)
            {
                printf("obtuse triangle\n");
            }
        }
        else
        {
           printf("illegal triangle\n"); 
        }
    }
    return 0;
}
