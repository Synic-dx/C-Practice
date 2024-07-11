#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Amai biya korba? (y/n)\n ");

    if (c == 'y' || c == 'Y')
    {
        printf("Cholo kori\n ");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("ok goodbye\n ");
    }
    else
    {
        printf("Ayein?\n ");
    }
}