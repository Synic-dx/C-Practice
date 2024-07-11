#include <stdio.h>
#include <cs50.h>

void bhou(int n) {
    for(int i = 0; i < n; i++)
    {
        printf("bhou\n");
    }
}

int main(void) {
        int number = get_int("How many times would you like me to Bhou?\n");
        bhou(number);
}