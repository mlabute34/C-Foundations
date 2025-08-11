#include <stdio.h>

int main(){
    int student_num = 0; 

    printf("Enter the number of students: ");
    scanf("%d", &student_num);
    int grades[student_num]; 
    for (int i = 0; i < student_num; i++){
        printf("Enter grade for student %d: ", i + 1); //Plus one due to array indexing
        scanf("%d", &grades[i]); 
    }
    for (int i = 0; i < student_num; i++){
        if (grades[i]>= 50){
            printf("Student %d has passed.\n", i + 1); 
        }
        else {
            printf("Student %d has failed.\n", i + 1); 
        }
    }
    float student_average = 0; 
    for (int i = 0; i < student_num; i++){
        student_average = student_average + grades[i];
    }
    student_average = student_average / student_num; 
    printf("The average grade of the class is: %.2f", student_average); 
    return 0; 
}