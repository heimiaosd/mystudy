#include <stdio.h>
#include "EP08.h"

int main()
{
    long long p = 1, zero = 0, ans = 0;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == '0')
        {
            zero += 1;
        }
        else
        {
            p *= (str[i] - '0');
        }
        if(i >= 13)
        {
            if(str[i - 13] == '0')
            {
                zero -= 1;
            }
            else 
            {
                p /= (str[i-13] - '0');
            }
        }
        if(zero == 0 && p > ans) ans = p;
    }
    printf("%lld\n",ans);
    return 0;
}

