/**
 * 
 * Author: Clare Marsolek, Jarrad Shaff, Ireland Gaffey
 * Date: 10/17/2019
 *
 * This .c file contains all the functions for Hack 08
 *
**/
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "string_utils.h"

void replaceChar(char *s, char oldChar, char newChar){
	int size = strlen(s);
	for( int i = 0; i < size; i++){
		if (s[i] == oldChar){
			s[i] = newChar;
		}
	}
	printf("the new string is %s.\n", s);
}

 char * replaceCharCopy(const char *s, char oldChar, char newChar){
	int size = strlen(s);
	char * copy = malloc(sizeof(char) * size);
		for(int i=0; i<size; i++) {
		copy[i] = s[i];
		}
	for(int i = 0; i < size; i++){
		if (copy[i] == oldChar){
			copy[i] = newChar;
		}
	}
	return copy;
}

void removeChar(char *s, char c){
	int size = strlen(s);
	for( int i = 0; i < size; i++){
		if (s[i] == c){
			for(int j = i; j < size; j++){
				s[j] = s[j+1];
			}
		size--;
		i--; 
		}
	}
	printf("the new string is %s \n" , s);
}

char * removeCharCopy(const char *s, char c){
	int size = strlen(s);
	char * copy = (char*)malloc(sizeof(char) * size);
	for( int i = 0; i < size; i++){
		if (copy[i] == c){
			for(int j = i; j < size; j++){
				copy[j] = copy[j+1];
			}
		size--;
		i--; 
		}
		else{
		copy[i] = s[i];
		}
	}
 return copy;
}

char **lengthSplit(const char *s, int n){
	int size = strlen(s);
	int numberOfStrings = ceil(size/(double)n);
	char ** matrix = (char **) malloc(numberOfStrings * sizeof(char *));
		for(int i=0; i<numberOfStrings; i++) {
		matrix[i] = (char *) malloc(n * sizeof(char));
		}
	int rows = 0;
	int cols = 0;
	int k = 0;
	for (int j = 0; j < n; j++){
		matrix[rows][cols] = s[j];
		if (k == n-1){
			matrix[rows][cols+1] = '\0';
			rows++;
			cols = 0;
			k = 0;
		}
		else{
			cols++;
		}
		k++;
	}
	for(int m=0; m<numberOfStrings; m++) {
	free (matrix[k]);
	}
free (matrix);
return matrix;
}

















