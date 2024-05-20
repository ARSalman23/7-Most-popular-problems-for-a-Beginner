#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int flag = 0;

    if(n == 1 || n == 0) flag = 1;

    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("Prime number");

    else printf("Not a Prime number");

    return 0;
}
