#include <stdio.h>

int main(){
    char vowels [][5] = { //Matrices have x and y coordinates, x doesn't NEED to be set as the compiler will use the rows automatically, you need a Y though. 
        {'A','E','I','O','U'}
    };
    //Experimenting with for loops
    for (int i = 0; i < 5; i++){
        printf("%c", vowels[0][i]); //Print i as it corresponds to each vowel in the matrix, at row 0 column i. 
    }
    return 0; // Trying to get better at remembering to put return 0 at the end of main functions.
}
