#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "your_cpp_code_file.hpp" // Замените на имя файла с вашим кодом

TEST_CASE("Calculate Sum") {
    REQUIRE(calculate_sum(2, 3) == 5);
    REQUIRE(calculate_sum(-2, -3) == -5);
    REQUIRE(calculate_sum(2, -3) == -1);
}
