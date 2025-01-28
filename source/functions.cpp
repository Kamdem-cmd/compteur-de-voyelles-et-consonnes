#include "../header/header.h"

//Fonction pour le décompte des mots dans une phrase
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

//Fonction pour le décompte des espaces dans une phrase
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

//Fonction pour le décompte des syllabes dans un mot
int countSyllables(const char* mot) {
    //initialisation du compteur
    int count = 0;
    //Temoin pour vérifier que le caractère précédent est une voyelle
    bool prevVowel = false;

    //Parcours du mot
    for(int i = 0; mot[i] != '\0'; i++) {
        //Conversion en minuscule
        char c = (mot[i] >= 'A' && mot[i] <= 'Z') ? mot[i] + 32 : mot[i];
        //Verification de la nature du caractère (Voyelle)
        bool isVow = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
        
        //Vérifie si le caractère est une voyelle et si le caractère précedent était une voyelle
        //(Marche si le caractère est une voyelle et si le précedent ne l'était pas, pour éviter de compter au comme deux syllabes)
        if(isVow && !prevVowel) {
            count++;
        }

        //Afin de déterminer si le caractère sera une voyelle  pour la  prochaine itération
        prevVowel = isVow;
    }

    return count;
}

