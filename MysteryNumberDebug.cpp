/*
Mystery Number Debug
Pawelski
3/19/2021
Please follow the instructions on the activity guide!
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int secret_number = rand() % 10 + 1;
    int guess;
    std::cout << "I am thinking of a number between 1 and 10...\n";
    std::cout << "Guess my number >> ";
    std::cin >> guess;
    if (guess = secret_number)
    {
        std::cout << "That is not my number! I was thinking of " 
            << secret_number << ".\n";
    }
    if (guess != secret_number)
    {
        std::cout << "That is my number!\n";
    }
    return 0;
}
