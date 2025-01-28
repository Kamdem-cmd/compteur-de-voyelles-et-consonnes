#include "../header/header.h"

int compte_mots(const char *phrase){
    //Pointeur vers phrase
    const char *ptr = phrase;
    //initialisation du compteur
    int count = 0;

    //Décompte du nombre de mots à partir des espaces
    while(*ptr != '\0'){
        if(*ptr == ' ' && *++ptr != ' '){
            count++;
        }
        ptr++;
    }

    return count + 1;
}

int compte_spaces(const char *phrase){
    //Pointeur vers phrase
    const char *ptr = phrase;
    //initialisation du compteur
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

int countSyllables(const char* word) {
    //initialisation du compteur
    int count = 0;
    bool prevVowel = false;

    //Parcours du mot
    for(int i = 0; word[i] != '\0'; i++) {
        //Conversion en minuscule
        char c = (word[i] >= 'A' && word[i] <= 'Z') ? word[i] + 32 : word[i];
        //Verification de la nature du caractère (Voyelle)
        bool isVow = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
        
        
        if(isVow && !prevVowel) {
            count++;
        }
        prevVowel = isVow;
    }
    
    return count > 0 ? count : 1;
}

