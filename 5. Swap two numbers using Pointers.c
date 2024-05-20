#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1, n2;
    scanf("%d %d",&n1, &n2);

    printf("n1 = %d, n2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
