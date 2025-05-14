#include <gtest/gtest.h>
#include "../include/StringHelper.h"

using namespace Utils::String;

// Test for converting to uppercase
TEST(StringHelperTest, ToUpperCase) {
    EXPECT_EQ(StringHelper::toUpperCase("hello"), "HELLO");
    EXPECT_EQ(StringHelper::toUpperCase("Hello World"), "HELLO WORLD");
}

// Test for converting to lowercase
TEST(StringHelperTest, ToLowerCase) {
    EXPECT_EQ(StringHelper::toLowerCase("HELLO"), "hello");
    EXPECT_EQ(StringHelper::toLowerCase("Hello World"), "hello world");
}

// Test for checking substring presence
TEST(StringHelperTest, Contains) {
    EXPECT_TRUE(StringHelper::contains("hello world", "world"));
    EXPECT_FALSE(StringHelper::contains("hello world", "WORLD"));
}

// Test for empty string handling
TEST(StringHelperTest, EmptyString) {
    EXPECT_EQ(StringHelper::toUpperCase(""), "");
    EXPECT_EQ(StringHelper::toLowerCase(""), "");
    EXPECT_FALSE(StringHelper::contains("", "text"));
}

// Test for handling special characters
TEST(StringHelperTest, SpecialCharacters) {
    EXPECT_EQ(StringHelper::toUpperCase("123!@#"), "123!@#");
    EXPECT_EQ(StringHelper::toLowerCase("123!@#"), "123!@#");
    EXPECT_TRUE(StringHelper::contains("123!@#", "!@#"));
}
