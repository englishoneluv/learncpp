#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "make_vector.h"
#include <vector>


TEST_CASE("Test Basic") {
    std::vector<int> correct_answer{1, 1, 1, 1, 1};
    CHECK(MakeVector(5, 1) == correct_answer);
}

TEST_CASE("Test Empty") {
    std::vector<int> correct_answer;
    CHECK(MakeVector(0, 1) == correct_answer);
}
