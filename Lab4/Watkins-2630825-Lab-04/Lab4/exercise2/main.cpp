//Author: Chris Watkins
//Assignment: EECS-169 Lab4 exercise2
//Description: This program will make a user guess a random number (1-100)
//Date: 9/29/16

#include <iostream>
using namespace std;
int main()
{
  int number=52;
  int guess=0;
  char playagain='n';

  do
  {
    cout<<"Welcome to the number game.\n";
    do
    {
      cout<<"Guess a number: ";
      cin>>guess;
      if(guess>100)
      {
        cout<<"Way too high... the number is between 1 and 100.\n";
      }
      else if(guess<number)
      {
        cout<<"Sorry, your guess is too low.\n";
      }
      else if(guess>number && guess<100)
      {
        cout<<"Sorry, your guess is too high.\n";
      }
    }while(guess!=number);

    if(guess==number)
    {
      cout<<"You win!\n";
    }
    cout<<"Would you like to play again? (y/n)";
    cin>>playagain;
  }while(playagain=='y');

return(0);
}
