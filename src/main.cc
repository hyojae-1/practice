#include "StringHelper.h"
#include <iostream>

int main() {
    std::string text = "  Hello, World!  ";
    std::cout << "Original: [" << text << "]\n";
    std::cout << "Trimmed: [" << Utils::String::StringHelper::Trim(text) << "]\n";
    std::cout << "Lower: [" << Utils::String::StringHelper::ToLower(text) << "]\n";
    std::cout << "Upper: [" << Utils::String::StringHelper::ToUpper(text) << "]\n";
    return 0;
}

