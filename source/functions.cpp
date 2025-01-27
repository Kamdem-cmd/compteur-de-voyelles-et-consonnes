#include "../header/header.h"

int compte_mots(const char *phrase){
    //Pointeur vers phrase
    const char *ptr = phrase;
    int count = 0;

    //Décompte du nombre de mots
    while(*ptr != '\0'){
        if(*ptr == ' '){
            count++;
        }
        ptr++;
    }

    return count + 1;
}

