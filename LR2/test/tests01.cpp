#include <gtest/gtest.h>
#include "../include/octal.h"


TEST(test_01, basic_test_set) {
    octal var1 = octal();
    octal var2 = octal(3, '7');
    octal var3 = octal{'1', '2', '3'};
    octal var4 = octal("107");
    octal var5 = var1;
    ASSERT_TRUE(true);
}

TEST(test_02, basic_test_set) {
    octal var1 = octal("111");
    octal var2 = octal("777");
    octal var3 = var1;

    bool equals = (var1 == var3); 
    bool not_equals = (var1 != var3); 
    ASSERT_TRUE(equals);
    ASSERT_FALSE(not_equals);

    bool greater1 = (var1 > var2); 
    bool greater2 = (var2 > var1); 
    ASSERT_FALSE(greater1);
    ASSERT_TRUE(greater2);

    bool less1 = (var1 < var2); 
    bool less2 = (var2 < var1); 
    ASSERT_TRUE(less1);
    ASSERT_FALSE(less2);
}

TEST(test_03, basic_test_set) {
    octal var1 = octal("777");

    octal res1 = octal("1000");
    octal res2 = octal("1");

    var1 += octal("1");
    bool result1 = (var1 == res1);
    ASSERT_TRUE(result1);

    var1 -= octal("777");
    bool result2 = (var1 == res2);
    ASSERT_TRUE(result2);
}