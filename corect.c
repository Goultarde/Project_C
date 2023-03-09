#include "includes.h";

int main(coid){
    char buf[1500];

    int fd = open("correct.c", O_RDONLY);
    int nb_read = read(fd, buf, 1499);
}