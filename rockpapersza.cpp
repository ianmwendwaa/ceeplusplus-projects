//
// Created by Owner on 10/15/2025.
//
//
// Created by Owner on 10/15/2025.
//
#include <iostream>
#include <string>
#include <random>

// Store the three items; retrieve any randomly;
// WIN CRITERIA(comp vs user): rock vs szas, szas vs paper, paper vs rock

class Item {
public:
    std::string name;


};

std::string generateRandomItem() {
    const static std::vector<std::string> items = {"Rock", "Paper", "Scissors"};
    std::mt19937 mt(time(nullptr));
    std::uniform_int_distribution<> dist(0, items.size() - 1);

    const static std::string randItem = items[dist(mt)];
    return randItem;
}

bool hasWon(const std::string& option) {

    // static std::map<std::string, std::string> winCriteria = {{"",""},{"",""}};

    if (option == generateRandomItem()) {
        generateRandomItem();
    }

    if (option == "Rock" && generateRandomItem() == "Scissors") {
        std::cout << "You have won!";
        return true;
    }

    if (option == "Paper" && generateRandomItem() == "Rock") {
        std::cout<<"You have won!";
        return true;
    }
    if (option == "Scissors" && generateRandomItem() == "Paper") {
        std::cout << "You have won!";
        return true;
    }
    std::cerr << "You lost!";
    return false;
}

int main() {
    std::cout << "Welcome to my Rock, paper, scissors program"<< std::endl;
    std::cout << "Choose any to proceed: ";
    std::string user_item;//variable to store the user's choice

    std::cin >> user_item;
    hasWon(user_item);

    return 0;
}