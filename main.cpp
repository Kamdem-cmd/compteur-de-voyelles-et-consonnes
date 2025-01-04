#include <iostream>

int main(int argc, char ** argv[]){
    int const taille = 250;
    char phrase[taille];
    int voyelles = 0;
    int consonnes = 0; 
    // operations pour la recuperation de phrase
    std::cout << ">> " ;
    std::cin.getline(phrase, taille);
    //std::getline(std::cin, phrase, '\0');

    char* ptr = phrase;
    while(*ptr != '\0'){
        if(*ptr =='a'|| *ptr =='e'|| *ptr =='i'|| *ptr =='o'|| *ptr =='u'|| *ptr =='y') voyelles++; //incrementation du nbre de voyelles
        if(*ptr =='b'|| *ptr =='c'|| *ptr =='d'|| *ptr =='z'|| *ptr =='f'|| *ptr =='g'||
        *ptr =='h'|| *ptr =='j'|| *ptr =='k'|| *ptr =='l'|| *ptr =='m'|| *ptr =='n'||
        *ptr =='p'|| *ptr =='q'|| *ptr =='r'|| *ptr =='s'|| *ptr =='t'|| *ptr =='v'|| 
        *ptr =='w'|| *ptr =='x') consonnes++; //incrementation du nbre de consonnes

        ptr++;
    }

    // affichage du nombres de voyelles et consonnes
    std::cout <<"voyelles: " << voyelles << "\nconsonnes: " << consonnes;

    return 0;
}