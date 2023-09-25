/*************************************************************************
	> File Name: 55.最长的名字.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Sep 2023 01:47:47 PM CST
 ************************************************************************/

//找出最长名字的同学的名字
#include<stdio.h>
#include<string.h>

int main()
{
    int n=0;
    while(~scanf("%d",&n))
    {
        char maxname[100] = "";
        char name[100] = "";
        for(int i=0; i<n; i++)
        {
            scanf("%s",name);
            if(strlen(name)>strlen(maxname))
            {
                strcpy(maxname,name);
            }
        }
        printf("最长的名字是%s\n",maxname);
    }
    return 0;
}
