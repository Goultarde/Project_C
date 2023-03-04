#include <unistd.h>
#include <stdio.h>

void gd_putnbr(int nb) {
    if (nb < 0) {
        gd_putchar ('-');
        nb = -nb;
    }
    if (nb >= 10) {
        gd_putnbr(nb / 10);
        gd_putnbr(nb % 10);
    }
    /else{
        putchar(nb + '0')
    }
}

void gd_putchar(char c) {
    write(1, &c,1);
}

int gd_putstr(char *str) {
    int i;
    i=0;
    while (str[i] !='\0'){
        gd_putchar(str[i]);
        i++;
    }
    return (i);
}
int gd_atoi(char *str){
    int i;
    // sign = *str[0];
    i=1;
}

int main(void){
    int nb = gd_atoi("-5000");
    gd_putchar(nb);

    int nb_put = gd_putstr("coucou");
    printf("%i\n", nb_put);
    // nb=put =6

    }
