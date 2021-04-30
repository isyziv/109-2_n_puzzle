#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int m = 12;
    int c, b = 0;

    for (; m > 1;)
    {
        for (; (b > 3 || b < 1);)
        {
        re:
            printf("choose number 1~3 ");
            scanf("%d", &b);
            if (b >= m)
            {
                goto re;
            }
        }
        m -= b;
        b = 0;
        printf("%d\n", m);
        if (m == 1)
        {
            printf("you win\n");
            goto end;
        }
        //rand
        c = rand() % 2;
        c++;
        if (c > m)
        {
            c = m - 1;
        }
        //end
        printf("computer:%d\n", c);
        m -= c;
        printf("%d\n", m);
        if (m == 1)
        {
            printf("computer win\n");
            goto end;
        }
    }
end:
    system("pause");
    return 0;
}