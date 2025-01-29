#include <iostream>

#include "header/header.h"

int main(int argc, char ** argv[]){
    const int taille = 250;
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


    int nombre = 0;
    char** mots = extraire_mots(phrase, nombre);

    std::cout << "Mots extraits : " << std::endl;
    for (int i = 0; i < nombre; ++i) {
        std::cout << mots[i] << std::endl;
        delete[] mots[i]; // Libérer la mémoire allouée pour chaque mot
    }

    // affichage du nombres de voyelles et consonnes
    std::cout <<"voyelles: " << voyelles << "\nconsonnes: " << consonnes << "\n";

    // affichage du nombres de mots et espaces
    std::cout <<"espaces: " << spaces << "\nmots: " << mots << "\n";

    return 0;
}
