#include <stdio.h>
#include <stdlib.h>
int eng(char a)
{
    int b, c;
    switch (a)
    {
    case 'a':
        b = 10;
        break;
    case 'b':
        b = 11;
        break;
    case 'c':
        b = 12;
        break;
    case 'd':
        b = 13;
        break;
    case 'e':
        b = 14;
        break;
    case 'f':
        b = 15;
        break;
    case 'g':
        b = 16;
        break;
    case 'h':
        b = 17;
        break;
    case 'i':
        b = 34;
        break;
    case 'j':
        b = 18;
        break;
    case 'k':
        b = 19;
        break;
    case 'l':
        b = 20;
        break;
    case 'm':
        b = 21;
        break;
    case 'n':
        b = 22;
        break;
    case 'o':
        b = 35;
        break;
    case 'p':
        b = 23;
        break;
    case 'q':
        b = 24;
        break;
    case 'r':
        b = 25;
        break;
    case 's':
        b = 26;
        break;
    case 't':
        b = 27;
        break;
    case 'u':
        b = 28;
        break;
    case 'v':
        b = 29;
        break;
    case 'w':
        b = 32;
        break;
    case 'x':
        b = 30;
        break;
    case 'y':
        b = 31;
        break;
    case 'z':
        b = 33;
        break;
    case 'A':
        b = 10;
        break;
    case 'B':
        b = 11;
        break;
    case 'C':
        b = 12;
        break;
    case 'D':
        b = 13;
        break;
    case 'E':
        b = 14;
        break;
    case 'F':
        b = 15;
        break;
    case 'G':
        b = 16;
        break;
    case 'H':
        b = 17;
        break;
    case 'I':
        b = 34;
        break;
    case 'J':
        b = 18;
        break;
    case 'K':
        b = 19;
        break;
    case 'L':
        b = 20;
        break;
    case 'M':
        b = 21;
        break;
    case 'N':
        b = 22;
        break;
    case 'O':
        b = 35;
        break;
    case 'P':
        b = 23;
        break;
    case 'Q':
        b = 24;
        break;
    case 'R':
        b = 25;
        break;
    case 'S':
        b = 26;
        break;
    case 'T':
        b = 27;
        break;
    case 'U':
        b = 28;
        break;
    case 'V':
        b = 29;
        break;
    case 'W':
        b = 32;
        break;
    case 'X':
        b = 30;
        break;
    case 'Y':
        b = 31;
        break;
    case 'Z':
        b = 33;
        break;
    }
    //
    int c1, c2;
    int d;
    c1 = b % 10;
    c2 = b / 10;
    d = c1 * 9 + c2;
    return d;
}
int check(char a, int b)
{
    int c = 0;
    switch (a)
    {
    case '1':
        c = 1;
        break;
    case '2':
        c = 2;
        break;
    case '3':
        c = 3;
        break;
    case '4':
        c = 4;
        break;
    case '5':
        c = 5;
        break;
    case '6':
        c = 6;
        break;
    case '7':
        c = 7;
        break;
    case '8':
        c = 8;
        break;
    case '9':
        c = 9;
        break;
    }
    c = (9 - b) * c;
    return c;
}
int last(char a)
{
    int c;
    switch (a)
    {
    case '1':
        c = 1;
        break;
    case '2':
        c = 2;
        break;
    case '3':
        c = 3;
        break;
    case '4':
        c = 4;
        break;
    case '5':
        c = 5;
        break;
    case '6':
        c = 6;
        break;
    case '7':
        c = 7;
        break;
    case '8':
        c = 8;
        break;
    case '9':
        c = 9;
        break;
    }
    return c;
}
int main(void)
{
    int b;
    char a[10];
    printf("ID number :");
    fgets(a, 100, stdin);
    int final = eng(a[0]);
    for (int i = 1; i != 9; i++)
    {
        final += check(a[i], i);
    }
    final = 10 - (final % 10);
    if (final == last(a[9]))
    {
        puts("id number true");
    }
    else
    {
        puts("id number fail");
    }
    system("pause");
    return 0;
}