// 2025-08-13
// This progam reads from a file to display and add highscores. It may eventually print scores via their weight (highest score up top, etc)

#include <stdio.h>
#include <stdlib.h> // First time using a second library on my own.

void mainMenu(); 
void addScore();
void viewScores();

int main(){
    mainMenu();
}

void mainMenu(){
    printf("\n=== Main Menu ===\n");
    printf("1. Add a high score.\n");
    printf("2. View previous high scores.\n");
    int user_input; 
    scanf("%d", &user_input); 
    if(user_input == 1){
        addScore(); 
    }
    else if(user_input == 2){
        viewScores(); 
    }
    else{
        exit(0);
    }

}

void addScore(){
    FILE* fptr; 
    printf("Input your high score: "); 
    int newScore = 0; 
    scanf("%d", &newScore); 
    printf("Input your name: ");
    char name[25]; 
    scanf("%s", name); 
    fptr = fopen("Highscore.txt", "a"); 
    fprintf(fptr, "\nName: %s, Score: %d", name, newScore); 
    fclose(fptr);
    mainMenu();
}

void viewScores(){
    FILE *fptr; 
    fptr = fopen("Highscore.txt", "r");
    char fileString[1000]; 
    while(fgets(fileString, 1000, fptr)){
        printf("%s", fileString); 
    }
    fclose(fptr); 
    mainMenu(); 
}