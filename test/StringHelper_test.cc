#include "StringHelper.h"
#include <gtest/gtest.h>

using namespace Utils::String;

TEST(StringHelperTest, EmptyString) {
    EXPECT_EQ(StringHelper::Trim(""), "");
    EXPECT_EQ(StringHelper::ToLower(""), "");
    EXPECT_EQ(StringHelper::ToUpper(""), "");
    EXPECT_TRUE(StringHelper::Split("", ',').empty());
}

TEST(StringHelperTest, GeneralString) {
    EXPECT_EQ(StringHelper::Trim("  abc  "), "abc");
    EXPECT_EQ(StringHelper::ToLower("ABC"), "abc");
    EXPECT_EQ(StringHelper::ToUpper("abc"), "ABC");
    EXPECT_EQ(StringHelper::ReplaceAll("a-b-c", "-", "+"), "a+b+c");
}

TEST(StringHelperTest, SpecialCharacters) {
    EXPECT_EQ(StringHelper::ToLower("@#%&!"), "@#%&!");
    EXPECT_EQ(StringHelper::ReplaceAll("[abc]", "[", "("), "(abc]");
}

TEST(StringHelperTest, LongString) {
    std::string longStr(1000, 'a');
    EXPECT_EQ(StringHelper::ToUpper(longStr), std::string(1000, 'A'));
}

TEST(StringHelperTest, ContainsTest) {
    EXPECT_TRUE(StringHelper::Contains("hello world", "world"));
    EXPECT_FALSE(StringHelper::Contains("abc", "z"));
}

