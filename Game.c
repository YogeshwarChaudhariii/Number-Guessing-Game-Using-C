/* We will write a program that genrates a random number and asks the player to guess if. If the player guess is higher than actual number, 
the program displays "Lower number please". Similarly, If the user guess is too low, the program prints "Higher number please".
When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number. 
HINT: use loop & use a random number genrator. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  //Initialize random number genrator  
  srand(time(0));

    //Genrate random number between 1 to 100
  int randomNumber = (rand() %100) +1;
  int num_of_guesses = 0;
  int guessed;

    //Print the random number
  //printf("Random Number: %d\n",randomNumber);

  do{

  printf("Guess the number");
  scanf("%d", &guessed);
  if (guessed>randomNumber)     
  {
    printf("Lower number please...\n");
  }else
  {
    printf("Higher number please\n");
  }
  
  
  num_of_guesses++;

  }while (guessed!=randomNumber);
  
  printf("You Guessed the number in %d guesses", num_of_guesses);
     
    return 0;
}