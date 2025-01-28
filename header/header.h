#ifndef __HEADER_H__
#define __HEADER_H__

#include <cstring>

int compte_voy(const char *phrase);
int compte_cons(const char *phrase);
int compte_mots(const char *phrase);
int compte_spaces(const char *phrase);
int compte_syllables(const char* mot);
char** extraire_mots(const char* phrase, int& nbr_mots);

#endif
