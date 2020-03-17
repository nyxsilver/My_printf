#include "my.h"

void my_putnbr(int n)
{
    long int nb = n;
    
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb >= 10) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    else if (nb < 10)
        my_putchar(nb % 10 + '0');
}