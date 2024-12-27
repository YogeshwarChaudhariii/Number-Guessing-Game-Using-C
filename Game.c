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
