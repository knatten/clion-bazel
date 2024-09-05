#include "foo.h"
#include <gtest/gtest.h>

TEST(Foo, TestFoo)
{
    ASSERT_EQ(43, function());
}

TEST(Foo, TestBar)
{
    ASSERT_EQ(42, function());
}