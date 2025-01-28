#include <iostream>

#include "header/header.h"

int main(int argc, char ** argv[]){
    int const taille = 250;
    char phrase[taille];
    int voyelles = 0;
    int consonnes = 0; 
    // operations pour la recuperation de phrase
    std::cout << ">> " ;
    std::cin.getline(phrase, taille);

    /*char* ptr = phrase;*/ 
    consonnes = compte_cons(phrase);
    voyelles = compte_voy(phrase);
    spaces = compte_spaces(phrase);
    mots = compte_mots(phrase);


    // affichage du nombres de voyelles et consonnes
    std::cout <<"voyelles: " << voyelles << "\nconsonnes: " << consonnes << "\n";

    // affichage du nombres de mots et espaces
    std::cout <<"espaces: " << voyelles << "\nmots: " << consonnes << "\n";

    return 0;
}
