#include <stdio.h>
#include "functions.h"
#include "validation.h"

int main(void) {
  int choice;

do {
    displayMenu();
    choice = getMenuChoice();

    switch (choice) {
       case 1:
          // Call Employee Management function
          break;
       case 2:
          // Call Budget Management function
          break;
       case 3:
           // Call Supplier Management function
           break;
       case 4:
           // Call Asset Management function
           break;
       case 5: 
           // Call reports function
           break;
       case 6:
           printf("Existing the systems...\n");
          break;
    }
} while (choice != 6);

return 0;
}
  
           
