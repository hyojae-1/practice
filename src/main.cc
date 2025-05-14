#include <iostream>
#include "../include/StringHelper.h"

using namespace Utils::String;

int main() {
    std::string text = "Hello, World!";
    std::cout << StringHelper::toUpperCase(text) << std::endl;
    std::cout << StringHelper::toLowerCase(text) << std::endl;
    std::cout << (StringHelper::contains(text, "World") ? "Contains" : "Does not contain") << std::endl;
    return 0;
}
