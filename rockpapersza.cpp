//
// Created by Owner on 10/15/2025.
//
#include <iostream>
#include <map>
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

bool hasWon(const char* option) {

    static std::map<std::string, std::string> winCriteria = {"",""};

    if (option == generateRandomItem()) {
        generateRandomItem();
    }else {
    }
    return true;
}

int main() {
    hasWon("");
}


// switch (option) {
//     case "Rock":
//         return true;
//     case "Paper":
//         return true;
//     case "Scissors":
//         return true;
//     default: ;
// }