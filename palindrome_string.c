#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    int i, l;
    char a[20];

    printf("Enter a string:");
    scanf("%s", a);

    l = strlen(a);
    for (i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - 1 - i])
        {
            printf("It is not palindrome string");
            break;
        }
    }

    if (i == l / 2) 
    {
        printf("It is Palindrome string");
    }

    getch();
}
