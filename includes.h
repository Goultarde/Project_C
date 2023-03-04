#ifndef INCLUDES_H
# define INCLUDES_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct my_struct{
    int minutes;
    int hours;
    
}type_struct;
typedef struct my_list{
    int nbr;
    struct mylist *next;  
}type_lst;

#endif