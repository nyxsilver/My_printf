#include "my.h"

void my_putnbr_base(int nbr, char *base)
{
    int size = my_strlen(base);
    if (nbr >= 0 && nbr < 2147483647)
    {
        if (nbr >= size) {
            my_putnbr_base(nbr / size, base);
            my_putchar(base[nbr % size]);
        }
        else
        my_putchar(base[nbr % size]);
    }
    else if (nbr < 0 && nbr > -2147483648)
    {
        nbr = -nbr;
        my_putchar('-');
        my_putchar(base[nbr / size]);
        my_putchar(base[nbr % size]);
    }
}