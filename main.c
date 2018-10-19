/* This program allows the user to input a string,
 * find de most repeated character and show it to the user.
 * (blank spaces are discard)
 *
 * Author: Hugo Aguirre
 * Date: October 18th, 2018
 * */

#include <stdio.h>

int main() {
    //Variable declaration
    char string[100];
    char n;
    char nmax;
    int counter;
    int frqn = 0;

    //we ask the user to input a text/string
    printf("Welcome user, please enter a text:\n");
    fgets(string, sizeof(string),stdin);

    //the cycle works while the characters in the string aren't  '\0'
    for(int i = 0;string[i]!='\0'; i++){
        if (string[i]!= ' '){ //blank spaces are not counted as character
            n=string[i];
            counter=1;

            //the cycle count the frequency of the character
            for(int j = i+1;string[j]!='\0'; j++){
                if(n == string[j]){
                    counter++;
                }
            }
            //comparison between counter and frequency giving as result
            // the character with more frequency
            if(counter > frqn){
                frqn = counter;
                nmax = string[i];
            }
        }
    }

    //print the entered string, the most repeated character and how many times it is repeated
    printf("\nThe most repeated character in string '%sis: %c ", string, nmax);
    printf("\nIts frequency is: %d \n", frqn);
    return 0;
}