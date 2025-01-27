#include "../header/header.h"

int compte_mots(const char *phrase){
    //Pointeur vers phrase
    const char *ptr = phrase;
    int count = 0;

    //Décompte du nombre de mots a partir des espaces
    while(*ptr != '\0'){
        if(*ptr == ' '){
            count++;
        }
        ptr++;
    }

    return count + 1;
}

int compte_spaces(const char *phrase){
    //Pointeur vers phrase
    const char *ptr = phrase;
    int count = 0;

    //Décompte du nombre d'espaces
    while(*ptr != '\0'){
        if(*ptr == ' '){
            count++;
        }
        ptr++;
    }

    return count;
}

