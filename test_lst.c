#include "includes.h"
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
    int comp(const void *a, const void *b) {
        a = *(const int *) a;
        b = *(const int *) b;
        return a-b;
    }
    int array_int[5] = {5,6,4,2,1};
    int i = 0;
    // 1/ 
    int size = sizeof(array_int)/sizeof(int);
    qsort(array_int, size, sizeof(int), comp);



    while (i < 5){
        printf("%i\n", array_int[i]);
        i++;
    }
    while(lst){
        print("le nbr = %i\n", lst->nbr);
        lst = lst->next;
    }
}
