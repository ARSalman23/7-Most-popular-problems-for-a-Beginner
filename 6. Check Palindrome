#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char t[100];

    scanf("%s", s);

    int n = strlen(s);

    for(int i=0; i<n; i++)
    {
        t[n - 1 - i] = s[i];
    }

    int flag = 0;

    for(int i=0; i<n; i++)
    {
        if(t[i] != s[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}
