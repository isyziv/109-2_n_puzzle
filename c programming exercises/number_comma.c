#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long long int a;
    printf("input a number ");
    scanf("%lld", &a);
    int b[90];
    int i = 0;
    for (; a != 0; i++)
    {
        b[i] = a % 1000;
        a /= 1000;
    }
    i--;
    for (; i >= 0; i--)
    {
        printf("%d", b[i]);
        if (i != 0)
        {
            printf(",");
        }
    }
    puts(" ");
    system("pause");
    return 0;
}