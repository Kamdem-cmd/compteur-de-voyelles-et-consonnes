#include <iostream>

#include "header/header.h"

void extraireMots(char *phrase, char mots[][20], int &nbMots) {
    char *debutMot = phrase;
    nbMots = 0;
    int indexMot = 0;

    while (*phrase != '\0') {
        if (*phrase == ' ' || *(phrase + 1) == '\0') {
            // Inclure le dernier caractère si c'est la fin de la chaîne
            if (*(phrase + 1) == '\0') {
                phrase++;
            }

            // Copier le mot dans le tableau mots
            int j = 0;
            for (char *p = debutMot; p < phrase; p++) {
                mots[nbMots][j++] = *p;
            }
            mots[nbMots][j] = '\0'; // Ajouter le caractère de fin de chaîne
            nbMots++;

            // Réinitialisation pour le mot suivant
            debutMot = phrase + 1;
        }
        phrase++;
    }
}

int main(int argc, char ** argv[]){
    const int taille = 250;
    char phrase[taille];
    char mots[10][20]; // Tableau pour stocker jusqu'à 10 mots de 19 caractères max
    int nbMots;

    int voyelles = 0;
    int consonnes = 0; 
    int spaces = 0;
    int mot = 0; 
    int nombre = 0;

    // operations pour la recuperation de phrase
    std::cout << ">> " ;
    std::cin.getline(phrase, taille);

    
    //Pointeur vers phrase
    char* ptr = phrase;

    while(*ptr != '\0'){

        // Décompte du nombre de voyelles
        if(*ptr =='a'|| *ptr =='e'|| *ptr =='i'|| *ptr =='o'|| *ptr =='u'|| *ptr =='y') voyelles++; // miniscules
        if(*ptr =='a'-32|| *ptr =='e'-32|| *ptr =='i'-32|| *ptr =='o'-32|| *ptr =='u'-32|| *ptr =='y'-32)voyelles++; // majiscules

        // Décompte du nombre de consonnes
        if(*ptr =='b'|| *ptr =='c'|| *ptr =='d'|| *ptr =='z'|| *ptr =='f'|| *ptr =='g'||
            *ptr =='h'|| *ptr =='j'|| *ptr =='k'|| *ptr =='l'|| *ptr =='m'|| *ptr =='n'||
            *ptr =='p'|| *ptr =='q'|| *ptr =='r'|| *ptr =='s'|| *ptr =='t'|| *ptr =='v'|| 
            *ptr =='w'|| *ptr =='x') consonnes++; // miniscules
        if(*ptr =='b'-32|| *ptr =='c'-32|| *ptr =='d'-32|| *ptr =='z'-32|| *ptr =='f'-32|| *ptr =='g'-32||
            *ptr =='h'-32|| *ptr =='j'-32|| *ptr =='k'-32|| *ptr =='l'-32|| *ptr =='m'-32|| *ptr =='n'-32||
            *ptr =='p'-32|| *ptr =='q'-32|| *ptr =='r'-32|| *ptr =='s'-32|| *ptr =='t'-32|| *ptr =='v'-32|| 
            *ptr =='w'-32|| *ptr =='x'-32) consonnes++; // majiscules
 
        //Décompte du nombre d'espaces
        if(*ptr == ' ')spaces++;        

        ptr++; 
    }


    extraireMots(phrase, mots, nbMots);

    // Affichage des mots extraits
    std::cout << "Mots extraits : ";
    for (int i = 0; i < nbMots; i++) {
        std::cout << mots[i] << "\n" ;
    }

    // affichage du nombres de voyelles et consonnes
    std::cout <<"voyelles: " << voyelles << "\nconsonnes: " << consonnes << "\n";

    // affichage du nombres de mots et espaces
    std::cout <<"espaces: " << spaces << "\nmots: " << nbMots << "\n";

    return 0;
}
