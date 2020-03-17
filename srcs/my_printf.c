#include "my.h"

#include <stdarg.h>

int my_printf(const char *str, ...)
{
    va_list ap;
    int nb;

    va_start(ap, str);

    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            switch (str[i + 1])
            {
                case 's':
                {
                    my_putstr(va_arg(ap, char *));
                    break;
                }
                case 'd':
                {
                    my_putnbr(va_arg(ap, int));
                    break;
                }
                case 'i':
                {
                    my_putnbr(va_arg(ap, int));
                    break;
                }
                case 'c':
                {
                    my_putchar(va_arg(ap, int));
                    break;
                }
                case 'o':
                {
                    my_putnbr_base(va_arg(ap, int),"01234567");
                    break;
                }
                case 'u':
                {
                    nb = va_arg(ap, int);
                    my_putnbr(nb);
                    if (nb < 0){
                        my_putstr("4294967254");
                    }
                    else 
                        my_putnbr_base(va_arg(ap, unsigned int), "0123456789");
                    break;
                }
                case 'x':
                {
                    my_putnbr_base(va_arg(ap, int),"0123456789abcdef");
                    break;;
                }
                case 'X':
                {
                    my_putnbr_base(va_arg(ap, int),"0123456789ABCDEF");
                    break;
                }
                case '%':
                {
                    my_putchar('%');
                    break;
                }
                default:
                    break;
            }
            i++;
        }
        else 
            my_putchar(str[i]);
    }
    return(0);
}