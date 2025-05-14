#include "../include/StringHelper.h"
#include <algorithm>

namespace Utils {
namespace String {
    // Converts all characters in the string to uppercase
    std::string StringHelper::toUpperCase(const std::string& str) {
        std::string result = str;
        std::transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }

    // Converts all characters in the string to lowercase
    std::string StringHelper::toLowerCase(const std::string& str) {
        std::string result = str;
        std::transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }

    // Checks if the pattern is present in the text
    bool StringHelper::contains(const std::string& text, const std::string& pattern) {
        return text.find(pattern) != std::string::npos;
    }
}
}
