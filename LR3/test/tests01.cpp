#include <gtest/gtest.h>
#include "../include/rectange.h"
#include "../include/rhombus.h"
#include "../include/trapezoid.h"

TEST(test_01, basic_test_set) {
    rectangle* a = new rectangle();
    rectangle* b = new rectangle();
    b = a;
    ASSERT_TRUE(a == b);

}

TEST(test_02, basic_test_set) {
    rhombus* a = new rhombus();
    rhombus* b = new rhombus();
    b = a;
    ASSERT_TRUE(a == b);
}

TEST(test_03, basic_test_set) {
    trapezoid* a = new trapezoid();
    trapezoid* b = new trapezoid();
    b = a;
    ASSERT_TRUE(a == b);
}