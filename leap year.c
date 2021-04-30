#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int v, b;
    puts("leap years check");
    printf("year:");
    scanf("%d", &v);
    if (v % 4 != 0)
    {
        b = 0;
    }
    else
    {
        b = 1;
        if (v % 100 == 0)
        {
            b = 0;
            if (v % 400 == 0)
            {
                b = 1;
            }
        }
    }
    if(b==0)
    {
    puts("not leap years");
    }
    if(b==1)
    {
    puts("leap years");
    }
    system("pause");
    return 0;
}