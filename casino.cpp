#include <iostream>
#include <random>



int randomNumberGenerator() {
    static std::mt19937 mt(time(nullptr));
    std::uniform_int_distribution dist(1, 9);// to generate numbers from 1 to 9
    const int randomNumber = dist(mt);
    return randomNumber;
}

bool IsGuessCorrect(const int& userGuess) {
    if (userGuess < 1 || userGuess > 9) {
        std::cerr << "Enter a number from 1-9!";
        return false;
    }
    if (userGuess != randomNumberGenerator()) {
        std::cerr << "Wrong number! Try again.";
        return false;
    }
    std::cout << "Correct number! Here's your treat🍫";
    return true;
}

int main() {
    std::cout << "*********Simple number guessing game*********\n" << std::endl;
    std::cout << "Enter a number from 1-9 to try your luck:";
    int userGuess = 0;
    std::cin >> userGuess;
    IsGuessCorrect(userGuess);
}
