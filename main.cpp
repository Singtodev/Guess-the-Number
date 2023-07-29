#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    std::srand(static_cast<unsigned int> (std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to The guess the Number game ! \n";
    std::cout << "I have chosen a number between 1  and 100 . Can you guess it ? \n";

    while(true){
        std::cout << "Enter your guess :";
        std::cin >> guess;
        attempts++;

        if(guess == secretNumber){
            std::cout << "Congratulations! You guess the number " << secretNumber << " in " << attempts << " attempts! \n";
            break; 
        }else if(guess < secretNumber){
            std::cout << "Too low! Try again.\n";
        }else{
            std::cout << "Too high! Try again. \n";
        }
    }

    return 0;
}