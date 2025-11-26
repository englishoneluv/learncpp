#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "make_vector.h"
#include <cmath>
#include <string>
#include <vector>


TEST_CASE("Test MakeVector1") {
    std::vector<int> correct_answer{1, 2, 3};
    auto vec = MakeVector1();
    CHECK(vec.size() == 3);
    for (size_t i = 0; i < vec.size(); ++i) {
        CHECK(vec[i] == i + 1);
    }
}

TEST_CASE("Test MakeVector2") {
    std::vector<int> correct_answer{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto vec = MakeVector2(10);
    CHECK(vec.size() == 10);
    for (size_t i = 0; i < vec.size(); ++i) {
        CHECK(vec[i] == i + 1);
    }
    vec = MakeVector2(0);
    CHECK(vec.empty());
}

TEST_CASE("Test MakeVector3") {
    auto vec = MakeVector3();
    CHECK(vec.size() == 3);
    CHECK(vec[0] == "aba");
    CHECK(vec[1] == "caba");
    CHECK(vec[2] == "abacaba");
}

TEST_CASE("Test MakeVector4") {
    auto vec = MakeVector4(42);
    for (size_t i = 0; i < vec.size(); ++i) {
        CHECK(vec[i] == 42);
    }
}

TEST_CASE("Test MakeVector5") {
    {
        auto vec = MakeVector5(2);
        CHECK(vec == std::vector<int>{1, 2, 2, 1});
    }
    {
        auto vec = MakeVector5(0);
        CHECK(vec.empty());
    
    }
    {
        auto vec = MakeVector5(5);
        CHECK(vec == std::vector<int>{1, 2, 3, 4, 5, 5, 4, 3, 2, 1});
    }
}

TEST_CASE("Test MakeVector6") {
    {
        auto vec = MakeVector6(std::vector<int>{1, 2, 3});
        CHECK(vec == std::vector<int>{2, 4, 6});
    }
    {
        auto vec = MakeVector6(std::vector<int>{});
        CHECK(vec.empty());
    }
}

TEST_CASE("Test MakeVector7") {
    std::vector<int> nums{1, 2, 3};
    MakeVector7(nums, 4, 5);
    CHECK(nums == std::vector<int>{1, 2, 3, 4, 5});
}

TEST_CASE("Test MakeVector8") {
    {
        std::vector<int> nums{1, 2, 3};
        MakeVector8(nums);
        CHECK(nums == std::vector<int>{1});
    }
    {
        std::vector<int> nums{1};
        MakeVector8(nums);
        CHECK(nums == std::vector<int>{});
    }
    {
        std::vector<int> nums;
        MakeVector8(nums);
        CHECK(nums == std::vector<int>{});
    }
}

TEST_CASE("Test MakeVector9") {
    auto vec = MakeVector9();
    CHECK(vec.size() == 3);
    CHECK(std::fabs(vec[0] - 3.14) < 0.0000001);
    CHECK(std::fabs(vec[1] - 3.14) < 0.0000001);
    CHECK(std::fabs(vec[2] - 3.14) < 0.0000001);
}

TEST_CASE("Test MakeVector10") {
    {
        auto vec = MakeVector10(1);
        CHECK(vec == std::vector<std::vector<int>>(1, std::vector<int>(1, 0)));
        CHECK(vec[0][0] == 0);
    }
    {
        auto vec = MakeVector10(3);
        CHECK(vec == std::vector<std::vector<int>>(3, std::vector<int>(3, 0)));
        CHECK(vec[0][0] == 0);
    }
}
