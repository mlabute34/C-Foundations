#include <stdio.h>

int getNumberOfItems();
void inputItemDetails(int array_size, char item_names[][25], int item_quantities[]); 
void printInventorySummary(int array_size, char item_names[][25], int item_quantities[]); 

int main(){
    int array_size = getNumberOfItems(); 
    char item_names[array_size][25];
    int item_quantities[array_size];
    
    inputItemDetails(array_size, item_names, item_quantities);
    printInventorySummary(array_size, item_names, item_quantities);  

    return 0; 
}

int getNumberOfItems(){
    int array_size; 
    printf("Input amount of different items are you storing: ");
    scanf("%d", &array_size);  
    return array_size; 
}
void inputItemDetails(int array_size, char item_names[][25], int item_quantities[]){
    for(int i = 0; i < array_size; i++){
        printf("Enter the name of item %d: ", 1 + i);
        scanf("%s", item_names[i]); 
        printf("Input the item amount: ");
        scanf("%d", &item_quantities[i]);
    }
}
void printInventorySummary(int array_size, char item_names[][25], int item_quantities[]){
    printf("Items Summary\n");
    for (int i = 0; i < array_size; i++){
        printf("Item name: %s, Amount: %d\n", item_names[i], item_quantities[i]);

    }

}
