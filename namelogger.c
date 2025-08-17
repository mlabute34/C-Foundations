#include <stdio.h>

// Functions 
// Add a name to file
void addName();
// View names from file 
void viewNames(); 
// Main Menu (Use Main?)
void mainMenu(); 


int main(){
    mainMenu(); 
}

void addName(){
    FILE* fptr; 
    char name[50]; 
    printf("\nAdd a name: "); 
    scanf("%s", name); 
    fptr = fopen("log.txt", "a");
    fprintf(fptr, "\n%s", name);
    fclose(fptr); 
}

void viewNames(){
    FILE* fptr; 
    fptr = fopen("log.txt", "r"); 
    char readFile[1000];
    while(fgets(readFile, 1000, fptr)){
        printf("%s", readFile); 
    } 
    fclose(fptr); 
}

void mainMenu(){
    int choice = 0; 
    while(choice == 0){
        printf("\n=== Main Menu ===\n");
        printf("1. View names\n");
        printf("2. Add a name\n");
        printf("3. Exit the program\n");
        scanf("%d", &choice); 
        switch(choice){
            case 1:
                viewNames(); 
                break;
            case 2:
                addName(); 
                break;
            case 3:
                return; 
            default:
                printf("\n=== Invalid choice ===\n"); 
                break; 
        }
    }
    mainMenu(); 
}
