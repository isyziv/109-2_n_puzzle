#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double a, c;
    a = 4;
    int j = 0, k = 0;
    int b = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (double i = 3; 1; i += 2)
    {
        c = (4 / i);
        if (b == 0)
        {

            a = a - c;
            b++;
        }
        else
        {
            a = a + c;
            b--;
        }
        if (c1 != 1)
        {
            if (a > 3.141)
            {
                if (a < 3.149)
                {
                    printf("%25.20lf\n", a);
                    printf("%d項後=3.14\n", (int)i / 2);
                    c1++;
                    system("pause");
                }
            }
        }
        if (c2 != 1)
        {
            if (a > 3.1411)
            {
                if (a < 3.1419)
                {
                    printf("%25.20lf\n", a);
                    printf("%d項後=3.141\n", (int)i / 2);
                    c2++;
                    system("pause");
                }
            }
        }
        if (c3 != 1)
        {
            if (a > 3.14151)
            {
                if (a < 3.14159)
                {
                    printf("%25.20lf\n", a);
                    printf("%d項後=3.1415\n", (int)i / 2);
                    c3++;
                    system("pause");
                }
            }
        }

        if (c4 != 1)
        {
            if (a > 3.141591)
            {
                if (a < 3.141599)
                {
                    printf("%25.20lf\n", a);
                    printf("%d項後=3.14159\n", (int)i / 2);
                    c4++;
                    system("pause");
                    goto end;
                }
            }
        }

        //        check(a, i);
        
    }
end:
    system("pause");
    return 0;
}