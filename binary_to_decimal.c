#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a = 0, b = 0;
    int tmp, v;
    int s;
    scanf("%d", &a);
    tmp = a;
    s = log10(a);
    s++;
    for (int i = 0; i != s; i++)
    {
        v = (tmp % 10);
        if ((tmp % 10) != 0 && (tmp % 10) != 1)
        {
            printf("input error");
            system("pause");
            return 1;
        }
        b += (tmp % 10) * pow(2, i);
        tmp /= 10;
    }

    printf("%d", b);
    system("pause");
    return 0;
}