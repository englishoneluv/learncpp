#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "max_index.h"


TEST_CASE("Test last") {
    std::vector<int> nums{1, 2, 3, 4, 5};
    CHECK(MaxIndex(nums) == 4);
}

TEST_CASE("Test one") {
    std::vector<int> nums{1};
    CHECK(MaxIndex(nums) == 0);
}

TEST_CASE("Test first") {
    std::vector<int> nums{10, 2, 3, 4, 5};
    CHECK(MaxIndex(nums) == 0);
}

TEST_CASE("Test empty") {
    std::vector<int> nums;
    CHECK(MaxIndex(nums) == 1);
}

TEST_CASE("Test middle") {
    std::vector<int> nums{1, 2, 30, 4, 5};
    CHECK(MaxIndex(nums) == 2);
}
