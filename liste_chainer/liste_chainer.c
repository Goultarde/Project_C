#include "includes.h"
int comp(const void *a, const void *b) {
    const int *pa = (const int *) a;
    const int *pb = (const int *) b;
    return (*pa) - (*pb);
}

int main(void){
    
    
    /*
    1/ Trier array_int avec qsort ou avec un tri à bulle 
        un tri à bulle
    2/ Création de 5 "type_lst *" contenant
        un chiffre chacune
    3/ CHainer ses listes grâce au "next". La première liste grace au "next.
        La première liste doit être la valeur de la plus petite, la dernière la plus grande.
    4/ Bonus si doublement chainer (avec un prev) *
    5/ Bonus si bouclé, le dernier pointe 
        sur le premier et inversement.
    */
    
    int array_int[5] = {5,6,4,2,1};
    int i = 0;
    // 1/ 
    int size = sizeof(array_int)/sizeof(int);
    qsort(array_int, size, sizeof(int), comp);

    type_lst *lst_temp;
    type_lst *lst_0;
    type_lst *lst_1;
    type_lst *lst_2;
    type_lst *lst_3;
    type_lst *lst_4;

    lst_0 = (type_lst *)malloc(sizeof(lst_0));
    lst_1 = (type_lst *)malloc(sizeof(lst_1));
    lst_2 = (type_lst *)malloc(sizeof(lst_2));
    lst_3 = (type_lst *)malloc(sizeof(lst_3));
    lst_4 = (type_lst *)malloc(sizeof(lst_4));

    lst_0->nbr = 0;
    lst_1->nbr = 1;
    lst_2->nbr = 2;
    lst_3->nbr = 3;
    lst_4->nbr = 4;

    lst_0->next = lst_1;
    lst_1->next = lst_2;
    lst_2->next = lst_3;
    lst_3->next = lst_4;
    lst_4->next = NULL;




    while (i < 5){
        printf("%i\n", array_int[i]);
        i++;
    }
    while(lst_0){
        printf("le nbr est : %i\n", lst_0->nbr);
        lst_temp = lst_0->next;
        free(lst_0);
        lst_0 = lst_temp;
    }
}