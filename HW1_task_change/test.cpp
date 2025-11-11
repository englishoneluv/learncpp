#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "change.h"


TEST_CASE("Test change") {
    int a = 5;
    Change(a, 25);
    CHECK(a == 25);
}

TEST_CASE("Test same") {
    int a = 5;
    Change(a, 5);
    CHECK(a == 5);
}
