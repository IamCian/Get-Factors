#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
  //Stops if no number is gived
  if (argc <= 1) {
    printf("No number entered!\n");
    return 0;
  }

  //Gets integer of number to get factor of
  int num = atoi(argv[1]);

  //If the number is zero
  if (num == 0) {
    printf("Zero and any number is a factor of zero.\n");
    return 0;
  }

  //Checks if its negative
  short int negative = 0; //is it negative
  if (num < 0){
    negative = 1;
  }

  //Prints the table
  printf("|First factor\t|Second Factor\t|Product\t|\n"); //prints the table

  //Prints the factors
  if (num == 1) { //if the number is one
    printf("|%d\t\t|%d\t\t|%d\t\t|\n", 1, 1, 2);
    printf("|-%d\t\t|-%d\t\t|-%d\t\t|\n", 1, 1, 1);
    return 0;
  }
  if (num == -1) { //if the number is minus one
    printf("|-%d\t\t|%d\t\t|%d\t\t|\n", 1, 1, 0);
    return 0;
  }
  short int i; //index variable
  int div; //number divided by index
  if (!negative) { //if the number is positive
    for (i = 1; i <= (num/2); i++) {
      div = num/i;
      if (div*i == num && div >= i) {
        printf("|%d\t\t|%d\t\t|%d\t\t|\n", i, div, div+i);
        printf("|-%d\t\t|-%d\t\t|-%d\t\t|\n", i, div, div+i);
      }
    }
  }
  if (negative){ // if the number is negative
    for (i = 1; i <= (num/2)*-1; i++){
      div = num/i;
      if (div*i == num && div*-1 >= i) {
        printf("|-%d\t\t|%d\t\t|%d\t\t|\n", i, div*-1, (div*-1)-i);
        printf("|%d\t\t|-%d\t\t|%d\t\t|\n", i, div*-1, div+i);
      }
    }
  }

  return 0;
}
