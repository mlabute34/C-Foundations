#include <stdio.h>

void addName(char name[50]);
void readFile();
void mainMenu();

int main(){
    mainMenu();
    return 0; 
}

void mainMenu(){
    int input; 
    char name[50]; 

    printf("\n=== Main Menu ===\n");
    printf("1. View Names\n"); 
    printf("2. Add a name\n"); 
    scanf("%d", &input);
    switch(input){
        case 1: 
            readFile(); 
            break;
        case 2:
            addName(name); 
            break;
        default:
            printf("Invalid choice, try again.");
            mainMenu(); 
    }

}

void addName(char name[50]){
    FILE *fptr; 
    printf("Add name: "); 
    scanf("%s", name); 
    fptr = fopen("log.txt", "a"); 
    fprintf(fptr, "%s\n", name); 
    fclose (fptr); 
    mainMenu();
}

void readFile(){
    FILE *fptr; 
    char line[100]; 
    fptr = fopen("log.txt", "r"); 
    while(fgets(line, 100, fptr)){
        printf("\n%s", line); 
    }
    fclose (fptr); 
    mainMenu(); 
}