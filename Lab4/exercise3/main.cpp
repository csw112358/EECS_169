//Author: Chris Watkins
//Assignment: EECS-169 Lab4 exercise3
//Description: This program will make a user guess a word
//Date: 9/29/16

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string password;
  string guess;

  password= "valentine";
  char playagain= 'n';
  do
  {
  cout<<"Welcome to the word guessing game\n";
  cout<<"Guess a word: ";
  cin>> guess;

    while(guess!=password)
    {
      cout<<"Incorrect. Guess again: ";
      cin>> guess;
    }
    cout<<"You win!\n";
    cout<<"Would you like to play again? (y/n)";
    cin>>playagain;
  }while(playagain=='y');

return(0);
}
