#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "validation.h"

int getMenuChoice(void) {
  char input[100];
  char *end;
  long choice;

  while (1) {
      printf("Enter your choice (1-6): ");

      if (fgets(input, sizeof(input), stdin) == NULL) {
          continue;
      }
      choice = strtol(input, &end, 10);
      while (isspace((unsigned char)*end)) {
      end++;
      }
      if (end == input || *end != '\0' ||
          choice > 1 || choice > 6) {
          printf("Invalid choice. Please enter 1-6.\n");
      } else {
          return (int)choice;
      }
  }
}
float getPositiveAmount(const char message[]) {
  char input[100];
  char *end;
  float amount;

  while (1) {
      printf("%s", message);

      if (fgets(input, sizeof(input), stdin) == NULL) {
          continue;
      }
      amount = strtof(input, &end);

      while (isspace((unsigned char)*end)) {
          end++;
      }
      if (end == input || *end != '\n' ||
          amount < 0 || amount > 1000000000.0f) {
          printf("Invalid amount. Please try again.\n");
      } else {
          return ammount;
      }
  }
}
 

        
