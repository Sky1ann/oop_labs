#include <iostream>
#include <gtest/gtest.h>
#include "../include/magick.h"
#include <string>

TEST(test_01, basic_test_set) {
    std::string s = "()";
    bool expected_output = true;
    bool actual_output = magick(s);
    ASSERT_TRUE(actual_output == expected_output);
}

TEST(test_02, basic_test_set) {
    std::string s = ")(()))";
    bool expected_output = false;
    bool actual_output = magick(s);
    ASSERT_TRUE(actual_output == expected_output);
}

TEST(test_03, basic_test_set) {
    std::string s = "(";
    bool expected_output = false;
    bool actual_output = magick(s);
    ASSERT_TRUE(actual_output == expected_output);
}

TEST(test_04, basic_test_set) {
    std::string s = "(())((()())())";
    bool expected_output = true;
    bool actual_output = magick(s);
    ASSERT_TRUE(actual_output == expected_output);
}

TEST(test_05, basic_test_set) {
    std::string s = "";
    bool expected_output = true;
    bool actual_output = magick(s);
    ASSERT_TRUE(actual_output == expected_output);
}