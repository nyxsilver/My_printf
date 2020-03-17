#ifndef     MY_H
#define     MY_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void my_putchar (char c);
void my_putnbr(int n);
void my_putstr(char *str);
int my_strlen(char *str);
int my_printf(const char *str, ...);
void my_putnbr_base(int nbr, char *base);

#endif