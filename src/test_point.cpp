#define CATCH_CONFIG_MAIN
#include "libs/catch.hpp"
#include "point.hpp"

TEST_CASE("Creating a default Point", "[point]") {
    Point p;

    REQUIRE(p.get_x() == 0);
    REQUIRE(p.get_y() == 0);
}

TEST_CASE("Creating a Point", "[point]") {
    Point p = Point(3,2);

    REQUIRE(p.get_x() == 3);
    REQUIRE(p.get_y() == 2);
}

TEST_CASE("Creating a default Point and setting values", "[point]") {
    Point p;
    p.set_x(3);
    p.set_y(4);

    REQUIRE(p.get_x() == 3);
    REQUIRE(p.get_y() == 4);
}