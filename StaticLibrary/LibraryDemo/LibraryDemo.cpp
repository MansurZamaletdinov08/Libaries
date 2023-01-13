#include <iostream>
#include "Greeter.h"

int main() {
    std::string name1;

    std::cout << "Введие имя: ";
    std::cin >> name1;

    Greeter rand;
    std::cout << rand.greet(name1);
}