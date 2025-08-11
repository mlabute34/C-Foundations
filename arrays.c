#include <stdio.h>

int main(){
    int number_array [3]; 
    number_array[0] = 10; // Array indexing starts at 0, not 1 
    number_array[1] = 20; 
    number_array[2] = 30; 

    printf("The third data point in this array is: %d",number_array[2]);
}