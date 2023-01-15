#include <iostream>
#include "Leaver.h"
//#pragma comment(lib, "DynamicLibrary.lib")

int main() {
    setlocale(LC_ALL, "Ru");
    std::string name1;

    std::cout << "Введите имя: ";
    std::cin >> name1;

    Leaver rand;
    std::cout << rand.leav(name1);
}