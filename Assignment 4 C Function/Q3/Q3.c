/*
 * Q3.c
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */


#include <stdio.h>
void reverseSentence();
void main() {
    printf("Enter a sentence: ");
    fflush (stdout);
    reverseSentence();
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
