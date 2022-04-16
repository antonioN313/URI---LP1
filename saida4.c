#include <stdio.h>

int main() {

    int i;
    puts("---------------------------------------");
    puts("|  decimal  |  octal  |  Hexadecimal  |");
    puts("---------------------------------------");

    for (i = 0; i < 16; i++)
        printf("|     %2i    |   %2o    |       %X       |\n", i, i, i);

    puts("---------------------------------------");

    return 0;
}
