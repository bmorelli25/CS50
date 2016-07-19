#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("How long is your shower?\n");
    int water = GetInt();
    printf("%i\n", water*12);
}