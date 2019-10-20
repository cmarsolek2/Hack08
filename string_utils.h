/**
 * 
 * Author: Clare Marsolek	
 * Date: 10/17/2019
 *
 * This .h file contains all the function prototypes for Hack 08
 *
**/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

/**
 * 
 * This function replaces instance of a given character with a 
 * different character in a string.
 *
**/
void replaceChar(char *s, char oldChar, char newChar);

/**
 * 
 * This function takes a string and creates a new copy of it
 * but with instances of a given character replaced with a different
 * character.
 *
**/
char * replaceCharCopy(const char *s, char oldChar, char newChar);

/**
 * 
 * This function takes a string and removes all instances of a certain
 * character.
 *
**/
void removeChar(char *s, char c);

/**
 * 
 * This function takes a string and makes a new copy of it
 * but with all the instances of a character removed from it.
 *
**/
char * removeCharCopy(const char *s, char c);

/**
 * 
 * This function takes a string and splits it up into an array of strings
 * the split is determined by given int n. 
**/
char **lengthSplit(const char *s, int n);

