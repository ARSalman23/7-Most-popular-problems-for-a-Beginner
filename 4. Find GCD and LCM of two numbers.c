#include<stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int t1 = n1;
    int t2 = n2;

    while(t2 != 0)
    {
        int r = t1 % t2;
        t1 = t2;
        t2 = r;
    }

    int gcd = t1;

    int lcm = (n1 * n2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
