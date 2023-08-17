// Create a program that generates a random number and asks the user to guess it. Provide feedback on theather the guess is too high or too low until the user guesses the correct number.

#include<iostream>
#include<stdlib.h>

int main()
{
    // initializing a variables 
    int number, guess, guesses = 1;
    // by using random function to get a value to gess a number
    number = rand() % 100 + 1;
    while(guess!=number)
    {
        // Accept a value to gess a number form user
        std::cout<<"Guess the number between 1 to 100\n";
        std::cin>>guess;
        // Check condition number is greater
        if(guess>number)
        {
            std::cout<<"Lower number please!\n";
        }
        // check another condition number is lower
        else if(guess<number)
        {
            std::cout<<"Higher number please!\n";
        }
        // after all condition will false it will be executed and give howmany attempts you have take
        else
        {
            std::cout<<"You guessed it in "<<guesses<<"attempts";
        }
        // increament of guess value
        guesses++;
    }
    return 0;
}
