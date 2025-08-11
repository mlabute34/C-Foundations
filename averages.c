#include <stdio.h>
#include <conio.h> // using getch for pausing the console, experimenting with different libraries

int main(){
    int grades [4][2];
    float average; 

    grades[0][0] = 85; 
    grades[1][0] = 90; 
    grades[2][0] = 78; 
    grades[3][0] = 92; 
    grades[0][1] = 88; 
    grades[1][1] = 76; 
    grades[2][1] = 95; 
    grades[3][1] = 89; 

    int rows = sizeof(grades) / sizeof(grades[0]); // Calculate number of rows in the matrix
    for (int i = 0; i < rows; i++){
        average = (grades[i][0] + grades[i][1]) / 2.0; // Calculate average for each row
        printf("The average of row %d is: %.2f\n", i, average); // Print the average
    }

    printf("Press Escape to exit the program.\n");
    int esc = getch(); // Wait for user to input a character. 
    if (esc == 27){ // 27 is ASCII for escape. 
        return 0;
    }
}