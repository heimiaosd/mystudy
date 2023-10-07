#include <stdio.h>

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int ans = 2520;
    for(int i=1; i<=20; i++)
    {
        if(ans % i == 0) continue;
        ans = ans / gcd(ans, i) * i;
    }
    printf("%d\n", ans);
    return 0;
}

