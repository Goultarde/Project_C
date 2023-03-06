#include "includes.h"

char *join_two_string(char const *s1, char const *s2){
    /*
    Connaitre la longeur totale de ma chaine retourné (longeur de s1 + logneur de s2 +1(pour le \0))
    malloc
    Remplir ma chaine des caractères de s1
    puis rempli ma chaine des caractère de s2 à la suite
    AJouter le \0
    return
    */

    char *ret;
    int len = 0;
    int j = 0;

    while(s1[len] != '\0')
        len++;
    while(s2[j] != '\0'){
        j++;
        len++;
    }
    len = len + 1;

    ret = (char *)malloc(sizeof(char) * len);
    
    len = 0;
    while(s1[len]){
        ret[len] = s1[len];
        len++;
    }
    j=0;
    while(s2[j] != '\0'){
        ret[len] = s2[j];
        len++;
        j++;
    }
    return(ret);
}

int main(void){
    char *join;
    join = join_two_string("Hello ", "world");
    printf("%s\n", join);
    if (join)
        free(join);
}
