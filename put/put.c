#include "../includes.h"

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


int main(void){
    int nb_put = gd_putstr("coucou");
    printf("%i\n", nb_put);
    // nb=put =6

    }
