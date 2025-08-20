#include <stdio.h>

// Functions 
void addName();
void viewNames(); 
void mainMenu(); 

struct Person{
    char name[50];
    int ID; 
};

int main(){
    mainMenu(); 
}

void addName(){
    FILE* fptr; 
    struct Person person;  
    printf("\nAdd a name: "); 
    scanf(" %[^\n]", person.name); // Read passed white spaces, stop at a new line 
    printf("Add an ID: ");
    scanf("%d", &person.ID); 
    fptr = fopen("log.txt", "a");
    fprintf(fptr, "\n%d: %s", person.ID, person.name);
    fclose(fptr); 
}

void viewNames(){
    FILE* fptr; 
    fptr = fopen("log.txt", "r"); 
    char readFile[1000];
    int count = 1; 
    while(fgets(readFile, 1000, fptr)){
        printf("%d: %s", count, readFile); 
        count++;
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
