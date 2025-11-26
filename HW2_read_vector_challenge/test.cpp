#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "read_vector.h"
#include <vector>


TEST_CASE("Test ReadVector1") {
    std::istringstream fakeInput("3\n1 2 3\n");
    std::streambuf* originalCin = std::cin.rdbuf(fakeInput.rdbuf());
    auto vec = ReadVector1();
    CHECK(vec == std::vector<int>{1, 2, 3});
}

TEST_CASE("Test ReadVector2") {
    std::istringstream fakeInput("3\n1 2 3\n");
    std::streambuf* originalCin = std::cin.rdbuf(fakeInput.rdbuf());
    auto vec = ReadVector2(2);
    CHECK(vec == std::vector<int>{2, 3});
}

TEST_CASE("Test ReadVector3") {
    std::istringstream fakeInput("3\naba caba abacaba\n");
    std::streambuf* originalCin = std::cin.rdbuf(fakeInput.rdbuf());
    auto vec = ReadVector3();
    CHECK(vec == std::vector<std::string>{"aba", "caba", "abacaba"});
}

TEST_CASE("Test ReadVector4") {
    std::istringstream fakeInput("3 2\n1 1\n2 2\n3 3\n");
    std::streambuf* originalCin = std::cin.rdbuf(fakeInput.rdbuf());
    auto vec = ReadVector4();
    CHECK(vec == std::vector<int>{1, 1, 2, 2, 3, 3});
}