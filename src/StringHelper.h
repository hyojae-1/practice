#pragma once
#include <string>
#include <vector>

namespace Utils {
namespace String {

class StringHelper {
public:
    static std::string ToLower(const std::string& str);
    static std::string ToUpper(const std::string& str);
    static std::string Trim(const std::string& str);
    static std::vector<std::string> Split(const std::string& str, char delimiter);
    static bool Contains(const std::string& str, const std::string& substr);
    static std::string ReplaceAll(std::string str, const std::string& from, const std::string& to);
};

} // namespace String
} // namespace Utils

