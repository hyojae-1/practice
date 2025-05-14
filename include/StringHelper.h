#ifndef STRING_HELPER_H
#define STRING_HELPER_H

#include <string>

namespace Utils {
namespace String {
    class StringHelper {
    public:
        // Converts all characters in the string to uppercase
        static std::string toUpperCase(const std::string& str);
        
        // Converts all characters in the string to lowercase
        static std::string toLowerCase(const std::string& str);
        
        // Checks if the pattern is present in the text
        static bool contains(const std::string& text, const std::string& pattern);
    };
}
}

#endif // STRING_HELPER_H

