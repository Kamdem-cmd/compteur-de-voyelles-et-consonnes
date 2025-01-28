#include "../header/header.h"

//Fonction pour le décompte des voyelles
int compte_voy(const char *phrase){
    int voyelles = 0;
    //Pointeur vers phrase
    const char* ptr = phrase;

    //Décompte
    while(*ptr != '\0'){
        // incrementation du nombre de voyelles
        if(*ptr =='a'|| *ptr =='e'|| *ptr =='i'|| *ptr =='o'|| *ptr =='u'|| *ptr =='y') voyelles++; // miniscules
        if(*ptr =='a'-32|| *ptr =='e'-32|| *ptr =='i'-32|| *ptr =='o'-32|| *ptr =='u'-32|| *ptr =='y'-32)voyelles++; // majiscules

        ptr++; 
    }
    return voyelles;
}

//Fonction pour le décompte de consonnes 
int compte_cons(const char *phrase){
    int consonnes = 0; 
    //Pointeur vers phrase
    const char* ptr = phrase;

    //Décompte
    while(*ptr != '\0'){
        // incrementation du nombre de consonnes
        if(*ptr =='b'|| *ptr =='c'|| *ptr =='d'|| *ptr =='z'|| *ptr =='f'|| *ptr =='g'||
            *ptr =='h'|| *ptr =='j'|| *ptr =='k'|| *ptr =='l'|| *ptr =='m'|| *ptr =='n'||
            *ptr =='p'|| *ptr =='q'|| *ptr =='r'|| *ptr =='s'|| *ptr =='t'|| *ptr =='v'|| 
            *ptr =='w'|| *ptr =='x') consonnes++; // miniscules

        if(*ptr =='b'-32|| *ptr =='c'-32|| *ptr =='d'-32|| *ptr =='z'-32|| *ptr =='f'-32|| *ptr =='g'-32||
            *ptr =='h'-32|| *ptr =='j'-32|| *ptr =='k'-32|| *ptr =='l'-32|| *ptr =='m'-32|| *ptr =='n'-32||
            *ptr =='p'-32|| *ptr =='q'-32|| *ptr =='r'-32|| *ptr =='s'-32|| *ptr =='t'-32|| *ptr =='v'-32|| 
            *ptr =='w'-32|| *ptr =='x'-32) consonnes++; // majiscules

        ptr++; 
    }
    return consonnes;
}


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

